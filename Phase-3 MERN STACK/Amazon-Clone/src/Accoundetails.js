import React, { useEffect,useState } from 'react'
import Header from './Header'
import Footer from './Footer'
import axios from 'axios'
import orders from './images/orders.png'
import lock from './images/lock.png'
import prime from './images/prime.png'
import location from './images/location.png'
import pay from './images/pay.png'
import business from './images/business.png'
import payment from './images/payment.png'
import customercare from './images/customercare.png'


function Accoundetails({data}) {

    const user=localStorage.getItem('user')
    const [userdata,Setuserdata]=useState(null)
    const [logindisplay,Changelogindisplay]=useState(true)

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

    {userdata?<div className='details' show={logindisplay}  >
<h2>Your Details</h2>
<p>Username: {userdata.username}</p>
<p>FullName: {userdata.first_name}</p>
<p>LastName: {userdata.last_name}</p>
<p>PhNo: {userdata.phone_number}</p>
<p>Email: {userdata.email}</p>
<p>Address: {userdata.address}</p>
<p>User Id: {userdata.user_id}</p>
</div>:<div></div>}
{userdata?<div>

</div>:<div></div>}

    <div className='w-75 mx-auto'>
    <h2>Your Account</h2>
    <div className='d-flex flex-wrap'>
    <div className='col-4 accountbox'>
        <img src={orders} className='orders w-auto'></img>
        <div className='d-block'>
            <p className='first'><b>Your Orders</b></p>
            <p className='secondm'>Track, return or buy things again</p>
        </div>
    </div>
    <div className='col-4 accountbox'>
        <img src={lock} className='alock w-auto'></img>
        <div className='d-block'>
        <p className='first'><b>Login & Security</b></p>
        <p className='secondm'>Edit, login, name and mobile number</p>
        </div>
    </div>
    <div className='col-4 accountbox'>
        <img src={prime} className='prime'></img>
        <div className='d-block'>
        <p className='first'><b>Prime</b></p>
        <p className='secondm'>View benefits and payment settings</p>
        </div>
    </div>
    <div className='col-4 accountbox'>
        <img src={location} className='locate'></img>
        <div className='d-block'>
        <p className='first'><b>Location</b></p>
        <p className='secondm'>Edit addresses for orders and gifts</p>
        </div>
    </div>
    <div className='col-4 accountbox'>
        <img src={pay} className='pay'></img>
        <div className='d-block'>
        <p className='first'><b>Payment options</b></p>
        <p className='secondm'>Edit or add payment methods</p>
        </div>
    </div>
    <div className='col-4 accountbox'>
        <img src={business} className='business'></img>
        <div className='d-block'>
        <p className='first'><b>Amazon Business</b></p>
        <p className='secondm'>Sign up for free to save upto 28% with gst invoice</p>
        </div>
    </div>
    <div className='col-4 accountbox'>
        <img src={payment} className='payment'></img>
        <div className='d-block'>
        <p className='first'><b>Amazon Pay balance</b></p>
        <p className='secondm'>Add money to your balance</p>
        </div>
    </div>
    <div className='col-4 accountbox'>
        <img src={customercare} className='customercare'></img>
        <div className='d-block'>
        <p className='first'><b>Contact Us</b></p>
        </div>
    </div>

    </div>
    </div>

    <Footer></Footer>



    </div>
  )
}

export default Accoundetails