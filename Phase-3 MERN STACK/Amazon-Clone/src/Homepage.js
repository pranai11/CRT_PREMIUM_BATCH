import React, { useEffect, useState } from 'react'
import Header from "./Header";
import Carousel from 'react-bootstrap/Carousel';
import Modal from 'react-bootstrap/Modal';
import Container from 'react-bootstrap/Container';
import Row from 'react-bootstrap/Row';
import Col from 'react-bootstrap/Col';
import Button from 'react-bootstrap/Button';
import { CarouselItem, ModalBody, ModalDialog, ModalFooter} from 'react-bootstrap';
import a1 from './images/img1.jpg';
import a2 from './images/img2.jpg';
import a3 from './images/img3.jpg';
import a4 from './images/img4.jpg';
import b1 from './images/item1.jpg';
import b2 from './images/item2.jpg';
import b3 from './images/item3.jpg';
import b4 from './images/item4.jpg';
import b5 from './images/item5.jpg';
import b6 from './images/item6.jpg';
import b7 from './images/item7.jpg';
import b8 from './images/item8.jpg';
import b9 from './images/item9.jpg';
import b10 from './images/item10.jpg';
import b11 from './images/item11.jpg';
import b12 from './images/item12.jpg';
import b13 from './images/item13.jpg';
import b14 from './images/item14.jpg';
import Footer from './Footer';
import { Link } from 'react-router-dom';
import axios from 'axios';


function Homepage({data}) {

  const user=localStorage.getItem('user')
  const [userdata,Setuserdata]=useState(null)

  useEffect(()=>{

    
    if(user!=='null'&&user!==null&&user){
        accdetails()
    }
    
    },[])
    
        const accdetails=async()=>{
            const data=new FormData()
    
            data.append('user_id',user)
            data.append("phonenumber",user)
            data.append("email",user)
    
            const response= await axios.post("https://gist.manojkoravangi.com/get-account.php",data,{header:{"content-data":"multipart/formdata"}})
    
            if(response){
        
                console.log(response.data.user_data)
                Setuserdata(response.data.user_data)
                localStorage.setItem("userdetails",JSON.stringify(response.data.user_data))
                   
            }
        
          }

  return (
    <div>

<Header data={data}/>
<Carousel>
      <CarouselItem>
        <img className="nature" alt='homeimages' src={a1}/>
      </CarouselItem>
      <CarouselItem>
      <img className="nature" alt='homeimages' src={a2}/>
      </CarouselItem>
      <CarouselItem>
        <img className="nature" alt='homeimages' src={a3}/>
      </CarouselItem>
      <CarouselItem>
        <img className="nature" alt='homeimages' src={a4}/>
      </CarouselItem>
    </Carousel>
    <div className='back'>
    <Container className='con p-0' fluid>
      <Row>
        <Col className='cont bg-light'><b className="ps-3">Starting ₹149 | Bestseling <span className='ps-3'>earbuds, headphones &...</span></b>
        <div className='c d-flex p-0'>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b4}/><p className='down'>Starting ₹249| boAt</p></Col>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b5}/><p className='down'>Starting ₹349| boult</p></Col>
         </div>
         <div className='c d-flex p-0 mb-3'>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b6}/><p className='down'>Starting ₹649| Noise</p></Col>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b7}/><p className='down'>Starting ₹149| Zebronics</p></Col>
         </div>
         <Link to='/ProductList' className='shop m-0'>Shop now</Link>
        </Col>
        <Col className='cont bg-light'><b>Appliances for your home|Up to 55% off</b>
        <div className='c d-flex p-0'>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b1}/><p className='down'>Air Conditioners</p></Col>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b10}/><p className='down'>Refrigerators</p></Col>
         </div>
         <div className='c d-flex p-0 mb-3'>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b12}/><p className='down'>Microwaves</p></Col>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b13}/><p className='down'>Washning machines</p></Col>
         </div>
         <Link to='/ProductList' className='shop m-0'>Shop now</Link>
        </Col>
        <Col className='cont bg-light'><b>Revamp your Home in style</b>
        <div className='c d-flex p-0'>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b8}/><p className='down'>Lighting solutions</p></Col>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b9}/><p className='down'>Home Storage</p></Col>
         </div>
         <div className='c d-flex p-0 mb-3'>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b2}/><p className='down'>Cushions, Covers, bedsheets & more</p></Col>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b11}/><p className='down'>Figurines, vases & more</p></Col>
         </div>
         <Link to='/ProductList' className='shop m-0'>Shop now</Link>
        </Col>
        <Col className='cont bg-light'><b>Starting ₹199 | Amazon Brands & more</b>
        <div className='c d-flex p-0'>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b3}/><p className='down'>Bedsheets</p></Col>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b1}/><p className='down'>Curtains</p></Col>
         </div>
         <div className='c d-flex p-0 mb-3'>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b1}/><p className='down'>Ironing boards & more</p></Col>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b1}/><p className='down'>Home decors</p></Col>
         </div>
         <Link to='/ProductList' className='shop m-0'>Shop now</Link>
        </Col>
      </Row>
    </Container>
    
    <Container className='w-100 p-0' fluid>
      <Row>
        <Col className='cont bg-light'><b>Revamp your Home in style</b>
        <div className='c d-flex p-0'>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b1}/><p className='down'>Cushion covers & more</p></Col>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b2}/><p className='down'>Figurines,vases & more</p></Col>
         </div>
         <div className='c d-flex p-0 mb-3'>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b3}/><p className='down'>Home storage</p></Col>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b1}/><p className='down'>Light solutions</p></Col>
         </div>
         <Link to='/ProductList' className='shop m-0'>Shop now</Link>
        </Col>
        <Col className='cont bg-light'><b>Appliances for your home|Up to 55% off</b>
        <div className='c d-flex p-0'>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b1}/><p className='down'>Air Conditioners</p></Col>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b1}/><p className='down'>Refrigerators</p></Col>
         </div>
         <div className='c d-flex p-0 mb-3'>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b2}/><p className='down'>Microwaves</p></Col>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b2}/><p className='down'>Washning machines</p></Col>
         </div>
         <Link to='/ProductList' className='shop m-0'>Shop now</Link>
        </Col>
        <Col className='cont bg-light'><b>Starting ₹99 | Amazon Brands & more</b>
        <div className='c d-flex p-0'>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b2}/><p className='down'>Home Decor</p></Col>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b3}/><p className='down'>Storage & racks</p></Col>
         </div>
         <div className='c d-flex p-0 mb-3'>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b3}/><p className='down'>Toys & games</p></Col>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b3}/><p className='down'>Jackets,dresses</p></Col>
         </div>
         <Link to='/ProductList' className='shop m-0'>Shop now</Link>
        </Col>
        <Col className='cont bg-light'><b>Starting ₹199 | Amazon Brands & more</b>
        <div className='c d-flex p-0'>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b1}/><p className='down'>Bedsheets</p></Col>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b2}/><p className='down'>Curtains</p></Col>
         </div>
         <div className='c d-flex p-0 mb-3'>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b3}/><p className='down'>Ironing boards & more</p></Col>
         <Col className='co m-3 p-0'><img alt='imagestodo' className='i' src={b1}/><p className='down'>Home decors</p></Col>
         </div>
         <Link to='/ProductList' className='shop m-0'>Shop now</Link>
        </Col>
      </Row>
      <Container fluid className='m-0'>
        <Row>
          <Col className='const bg-light w-auto m-0 p-0'>
          <div className='utensil'>
          <div className='uten'>
          <b className='box p-0'>Minimum 50% off | Kitchen needs curated from stores nearby</b>
          <div className='item'>
            
            <img className='u m-1' alt='images' src='https://m.media-amazon.com/images/I/51TAC0mtKaL._AC_SY400_.jpg'/>
            <img className='u m-1' alt='images' src='https://m.media-amazon.com/images/I/81THTP4uslL._AC_SY400_.jpg'/>

            <img className='u m-1' alt='images' src='https://m.media-amazon.com/images/I/41vLcmtZS6L._AC_SY400_.jpg'/>
            <img className='u m-1' alt='images' src='https://m.media-amazon.com/images/I/71gtfmkG5rL._AC_SY400_.jpg'/>

            <img className='u m-1' alt='images' src='https://m.media-amazon.com/images/I/612W0BID7KL._AC_SY400_.jpg'/>
            <img className='u m-1' alt='images' src='https://m.media-amazon.com/images/I/71vSdErX7yS._AC_SY400_.jpg'/>

            <img className='u m-1' alt='images' src='https://m.media-amazon.com/images/I/715vZXxg9JL._AC_SY400_.jpg'/>
            <img className='u m-1' alt='images' src='https://m.media-amazon.com/images/I/41A3ACWNrwL._AC_SY400_.jpg'/>

            <img className='u m-1' alt='images' src='https://m.media-amazon.com/images/I/517hZU2T6rL._AC_SY400_.jpg'/>
            <img className='u m-1' alt='images' src='https://m.media-amazon.com/images/I/61tVGh-COZL._AC_SY400_.jpg'/>

            <img className='u m-1' alt='images' src='https://m.media-amazon.com/images/I/61URAf5OROL._AC_SY400_.jpg'/>
            <img className='u m-1' alt='images' src='https://m.media-amazon.com/images/I/71z8leI29OL._AC_SY400_.jpg'/>

            <img className='u m-1' alt='images' src='https://m.media-amazon.com/images/I/51GzPM-vnlL._AC_SY400_.jpg'/>
            <img className='u m-1' alt='images' src='https://m.media-amazon.com/images/I/715DZ7HEEgL._AC_SY400_.jpg'/>
          </div>
          </div>
          </div>
          </Col>
        </Row>
      </Container>
    </Container></div>

    <Footer></Footer>

  </div>


  )
}

export default Homepage