import React, { useEffect, useState } from 'react'
import 'bootstrap/dist/css/bootstrap.min.css';
import Card from 'react-bootstrap/Card';
import Button from 'react-bootstrap/Button';
import './css/style.css';
import business1 from "./images/business1.jpg"
import electronics from "./images/electronics.jpeg"
import mengym from "./images/mengym.jpg"
import energy from "./images/energy.webp"
import insurance from "./images/insurance.jpg"
import petstore from "./images/petstore.jpg"
import telehealth from "./images/telehealth.jpg"
import ecommerce from "./images/ecommerce.jpg"
import real from "./images/real.jpg"
import bank from "./images/bank.png"
import tra from "./images/tra.png"
import car from "./images/car.png"
import diamond from "./images/diamond.png"
import cloth from "./images/cloth.png"
import elec from "./images/elec.png"
import gym from "./images/gym.png"
import power from "./images/power.png"
import furnit from "./images/furnit.png"
import pet from "./images/pet.png"
import home from "./images/home.png"
import umbrella from "./images/umbrella.png"
import Container from 'react-bootstrap/Container';
import Row from 'react-bootstrap/Row';
import Col from 'react-bootstrap/Col';
import man from './images/man.png';
import Rating from '@mui/material/Rating';
import { Link } from 'react-router-dom';
import axios from 'axios';
import { LocationCity, Search } from '@mui/icons-material';
import location from "./images/location.png"
import phone from "./images/phone.png"
import globe from "./images/globe2.png"
import CheckCircleIcon from '@mui/icons-material/CheckCircle';


function Body3() {
    const [bt,Setbt]=useState(null)
    const [ctgr,Setcat]=useState(null)
    const [testi,Settesti]=useState(null)
    const [result,Setresult]=useState(null)

    const bts = async ()=>{

      const data = new FormData()
      const response = await axios.get("http://localhost:8008/business-trends",data)
      if(response){
        console.log(response.data)
        if(response.data.status==="success"){
          Setbt(response.data.business_trends)
        }
      }
    }
    
    const cat = async ()=>{

      const catdata = new FormData()
      const catresponse = await axios.get("http://localhost:8008/categories",catdata)
      if(catresponse){
        console.log(catresponse.data)
        if(catresponse.data.status==="success"){
          Setcat(catresponse.data.categories)
        }
      }
    }

    const testimonal = async ()=>{

      const testidata = new FormData()
      const testiresponse = await axios.get("http://localhost:8008/Reviews",testidata)
      if(testiresponse){
        console.log(testiresponse.data)
        if(testiresponse.data.status==="success"){
          Settesti(testiresponse.data.Reviews)
        }
      }
    }

    const Setsearchitem = async(keyword)=>{
      const data=new FormData()
      Setresult(null)
      data.append("keyword",keyword)
      if(keyword){
        const response=await axios.get("http://localhost:8008/search-items/?keyword="+keyword,data)
        if(response.data.status==="success"){
          Setresult(response.data.items)
        }
      }
    }

    useEffect(()=>{

      bts()
      cat()
      testimonal()

    },[])

    
  return (
    <div className='totalbody'>




      <div className="local"> 
        <h2 className='name'>LOCAL SPHERE</h2>
        <p className='sname'>Discovering your Neighbourhood Gem's</p>
        <div class="searchbusi d-flex bg-light">
                <Search className='search1'/>
                <input placeholder="Search Business" class="border border-1 p-0" type="text" onChange={(event)=>{Setsearchitem(event.target.value)}}/>
               
                  <LocationCity className="search1"/><input placeholder="Enter Location" class=" border border-1 p-0" type="text"/><Search className='search1 bg-dark text-white'/>
                
            </div></div>
      
<div>
            {result?
<>

{result.map((item)=>(    <div className='d-block indiitem1'>
    <div className='color-black d-flex'>
    <img alt="indiitemimg" className="eeitemnadi" src={item.images}></img>
    <div className='d-block indiitemmatter'>
        <h3>{item.name}</h3>
        <Rating name="read-only" value={5} readOnly/>
        <p><img alt="indiitemimg" src={location} className='me-2'/>318 Read way<br></br><span className='ms-4'></span>Monroe,USA</p>
        <p><img alt="indiitemimg" src={phone} className='iimage1'/>+1 654 646 581</p>
        <p><img alt="indiitemimg" src={globe} className='iimage1'/>Visit Website</p>
    </div>
    <div className='indirp'><button className='lcv'><CheckCircleIcon/>LS Verified</button>
    <div className='mt-2 '><h5>{item.category}</h5></div>
    <p>Job Vacencies: 10</p>
    <p  className='lh-0 p-0 m-0'>Job Roles: </p>
    <ul><li>Cleaner</li><li>Chef</li><li>Manager</li></ul></div>
    </div>
    <hr></hr>
    <div className='d-flex justify-content-between'>
        <p>We are a privately held company in Monroe, GA proudly doing business for 6 years.</p>
        <Link to="https://www.tripadvisor.com/Restaurant_Review-g35122-d21264333-Reviews-Sanford_and_son_barbecue-Monroe_Georgia.html"> <button type='submit' className='mt-0 pb-2 pt-2 bg-secondary text-white'>Apply Now</button></Link>
    </div>
</div>))}


</>:<></>}

</div>

      <div className='body ms-5 ps-5 pt-5'>
      <h3>Explore the Categories</h3>
      <div className='d-flex flex-wrap'>
      {ctgr?<>
       
       
       {ctgr.map((itemcat)=>(
       
        <div>
                <div className='col d-flex shadow'>
                <img className='image text-white' src={itemcat.images}/>
                <p className='matter'><Link to="/Indiitem" className='text-decoration-none text-light'>{itemcat.name}</Link></p>
                </div>
        
</div>
))}

</>:null}
</div>

        </div>
        <hr/>
       <div  className='body ms-5 ps-5'>
        <h3>Businesses in Trending</h3>
       <div className='d-flex flex-wrap mt-3'>


       {bt?<>
       
       
       {bt.map((itemtr)=>(

<Card className='totalcard shadow mb-3' style={{ width: '17rem' }} >
<Card.Img className="trendimage" variant="top" src={itemtr.images} />
<Card.Body>
  <Card.Title>{itemtr.Heading}</Card.Title>
  <Card.Text>
  {itemtr.Matter}
  </Card.Text>
  <Button className='button' variant="primary">Visit</Button>
</Card.Body>
</Card>


))}
       
       
      
       
       </>:null}



    </div>
    </div>


    <p className='testi'>Testimonals</p>
        <hr className='color-white'></hr>
        <div className='car'>
          <div className='d-flex'>
            
             
              {testi?<>
       
       
       {testi.map((itemtesti)=>(
 <div className='testimonal' >
                <div>
                  <img className='test' alt='images' src={man} />
                  <h3>{itemtesti.Name}</h3>
                  <h5>{itemtesti.Business}</h5>
                  <Rating name="read-only" value={itemtesti.Rating} readOnly />
                  <p>{itemtesti.Matter}</p>
                </div>              </div>

                ))}
       
       
      
       
                </>:null}
           
          </div>
        </div>


    </div>
  )
}

export default Body3;