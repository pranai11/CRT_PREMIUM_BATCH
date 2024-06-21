import {ModalBody, ModalDialog, ModalFooter, OffcanvasBody, OffcanvasHeader } from 'react-bootstrap';
import menuimg from './images/menu.png';
import logoimg from "./images/logo.png";
import locimg from './images/location.jpg';
import indiaimg from './images/india.jpg';
import cartimg from './images/cart.png';
import userimg from './images/user.png';
import { useState } from 'react';
import Offcanvas from 'react-bootstrap/Offcanvas';
import CloseIcon from '@mui/icons-material/Close';
import { Link } from 'react-router-dom';
import Button from 'react-bootstrap/Button';
import Modal from 'react-bootstrap/Modal';
import {useEffect} from 'react';
import axios from 'axios'



function Header({data}){

    const [offcanvasdisplay,changeoffcanvasdisplay]=useState(false)
    const [modaldisplay,changemodaldisplay]=useState(false)
    const [logindisplay,Changelogindisplay]=useState(true)
    const [limit,Setlimit]=useState(12)
    const [result,Setresult]=useState(null)
    const [ushow,Setushow]=useState(null)
    
const [userdata,Setuserdata] = useState(null)
    useEffect(()=>{
        
Setuserdata(data)

    },[JSON.parse(localStorage.getItem("userdetails"))])




    const Addtocart=async (product_id)=>{
    
      const user_id=localStorage.getItem('user')
    
    
      if(user_id!='null'){
        
      
    
      const quantity=2
    
      const data=new FormData()
    
      data.append('user_id',user_id)
      data.append('quantity',quantity)
      data.append('product_id',product_id)
    
      const response=await axios.post("https://gist.manojkoravangi.com/insert-cart.php",data,{headers:{"Content-Type":"multipart/formdata"}})
    
    
      console.log(response)
    
      if(response){
          alert('success')
      }
    
    
      }
      else{
        alert("Need to login first")
      }
    
    }
    
    
    const Searchitem=async (keyword)=>{
    
    
    
        const data=new FormData()
    
        Setresult(null)
        data.append('limit',limit)
        data.append('name',keyword)
    if(keyword){
    
        const response=await axios.post("https://gist.manojkoravangi.com/search-products.php",data,{headers:{'Content-Type':'multipart/form-data'}})
        console.log(response.data)
        if(response.data.result!==null){
                console.log(response.data.result)
                Setresult(response.data.result)
        }
    }
    
    }

    
function loggingin(){
    
    window.location.replace("/Login")

}

const user=localStorage.getItem('user')



console.log(data)




        return(<div>

        <div className='Head1'>
        
        <img alt='logoimage' className="logo" src={logoimg} onClick={()=>{changemodaldisplay(!modaldisplay)}}></img>
        <div class="d-flex">
            <img src={locimg} class="image1 m-0 p-0"/>
            <div class="m-0 p-0 ps-1">
                <p class="m-0 p-0 lh-sm">Delivering to nellore 524002</p>
                <p class="m-0 p-0 lh-sm fw-bold">Update Location</p>
            </div>  
        </div> 

            <div class="d-flex h-75 mt-1 bg-light">
                <select class="border border-0 text-dark ">
                    <option>All</option>
                    <option>Alexa</option>
                    <option>Devices</option>
                    <option>Fashion</option>
                </select>
                <input placeholder="Search Amazon.in" class="rounded rounded-0 border border-0 p-0" type="text" onChange={(event)=>{Searchitem(event.target.value)}} />
                <button class="btn rounded rounded-0 border border-0 btn-warning fs-6 lh-sm" onClick={()=>{window.location.replace('/Search')}}>Search</button>
            </div>
            <div className="flag">
                <img alt="eng" src={indiaimg} className="image2"></img>
                <p className='en'><b>EN</b></p>
            </div>
            
           
            
            {user!=='null' && userdata?<div><Link to='/Accountdetails'><h3 className='fs-6 text-decoration-none text-light'>Hello,<br/>{userdata.username}</h3></Link></div>:<Link class="text-light text-decoration-none" to='/login'><div>
            <p class="m-0 fs-6 lh-sm" >Hello, Sign-in</p><h3 class="m-0 fs-6 lh-sm">Accounts & Lists</h3></div></Link>}
            

            <div>
            <p class="m-0 fs-6 lh-sm">Returns</p><h3 class="m-0 fs-6 lh-sm">& Orders</h3>
            </div>

            <div class="d-flex mt-2">
            <img class="cart" src={cartimg}/> 
            <Link to='/Cart' className='text-light'><p class="mt-2"><b>Cart</b></p></Link>
         </div>
        </div>
<div class='navbar  d-flex bg-secondary text-light ps-2 pe-3  '>
<div onClick={()=>{changeoffcanvasdisplay(!offcanvasdisplay)}} class='d-flex '>
<img alt='menuicon' class='menu' src={menuimg}></img>
<p class='m-0 pt-1'>All</p></div>
<a href="#" class="text-light text-decoration-none m-0">Fresh</a>
        <a href="#" class="text-light text-decoration-none m-0">Amazon Mini TV</a>
        <a href="#" class="text-light text-decoration-none m-0">Sell</a>
        <a href="#" class="text-light text-decoration-none m-0">Best Sellers</a>
        <a href="#" class="text-light text-decoration-none m-0">Mobiles</a>
        <a href="#" class="text-light text-decoration-none m-0">Today's Deals</a>
        <a href="#" class="text-light text-decoration-none m-0">Electronics</a>
        <a href="#" class="text-light text-decoration-none m-0">Prime</a>
        <a href="#" class="text-light text-decoration-none m-0">Fashion</a>
        <a href="#" class="text-light text-decoration-none m-0">Customer Service</a>
</div>


<Offcanvas show={offcanvasdisplay} >
<OffcanvasHeader class='bg-secondary d-flex pt-2 ps-2 text-light w-100 p-0 m-0'><img class="image3" src={userimg} alt=""/>
{user!=='null'&&userdata?<div><h2 class='fs-3'>Hello,{userdata.first_name}</h2></div>:<p class="m-0 fs-3 lh-sm" >Hello, Sign-in</p>}</OffcanvasHeader>

<OffcanvasBody class='text-black lh-sm ps-3 overflow-y-scroll'>
  <CloseIcon className='close' onClick={()=>{changeoffcanvasdisplay(!offcanvasdisplay)}} />
  <div class="fw-bolder fs-5"><p>Trending</p></div>
                <p>Best Sellers</p>
                <p>New Releases</p>
                <p>Movers and Shakers</p>
                <hr/>
                <div class="fw-bolder fs-5"><p>Digital Content and Devices</p></div>
                <p>Amazon miniTV- FREE entertainment</p>
                <p>Echo & Alexa</p>
                <p>Fire TV</p>
                <p>Kindle E-Readers & e-books</p>
                <p>Audible Audio books</p>
                <p>Amazon Prime Video</p>
                <p>Amazon Prime Music</p>
                <hr/>
                <div class="fw-bolder fs-5"><p>Shopping by Category</p></div>
                <p>Mobiles, Computers</p>
                <p>Tv, Appliances, Electronics</p>
                <p>Men's Fashion</p>
                <p>Women's Fashion</p>
                <p>Home, Kitchen, Pets</p>
                <p>Books</p>
                <p>Car, Motor Bike, Industrial</p>
                
            
</OffcanvasBody>

</Offcanvas>

<Modal show={modaldisplay}>
<ModalDialog>
<ModalBody>
{user!=='null' && userdata?<div show={logindisplay}  >
<h2>Your Details</h2>
<p>Username: {userdata.username}</p>
<p>PhNo:{userdata.phone_number}</p>
<p>Email:{userdata.email}</p>
</div>:<div></div>}
{localStorage.getItem("user")==='null'?<div>
<p>You need to Log in</p>
</div>:<div></div>}
</ModalBody>

</ModalDialog>

<ModalFooter>          
  <Button variant="secondary" onClick={()=>{changemodaldisplay(!modaldisplay)}}>Close</Button>
  {localStorage.getItem("user")!=='null'?<Button onClick={()=>{localStorage.setItem("user",'null');window.location.reload();localStorage.setItem('userdetails','null')}}>Signout</Button>:<div></div>}
  {localStorage.getItem("user")==='null'?<Button onClick={()=>{loggingin()}}>Login</Button>:<div></div>}
  <Button variant='primary' onClick={()=>{window.location.replace('/')}}>Home</Button>
</ModalFooter>
</Modal>







{result?

<div className='d-flex flex-wrap container-fluid mx-3'>

{result.map((item)=>(<div className='col-2 border shadow-sm p-2 mb-2 me--1'>

<img className='w-100 mb-4' src={item.images}></img>
<p>{item.name}</p>

<p><b>Price: </b>${item.price}</p>
<Button className='mt-2'><Link to={'/Product/'+item.product_id} className='text-light text-decoration-none'>Buy Now</Link></Button><pre></pre>
            <Button class="but1" onClick={()=>{Addtocart(item.product_id)}}>Add to Cart</Button><br/>

</div>))}


</div>:<div></div>}
</div>
)
}

export default Header