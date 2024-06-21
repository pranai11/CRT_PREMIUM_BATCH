import React, { useState } from 'react'
import loginlogo from './images/loginlogo.png'
import axios from 'axios'
import { Link, Outlet } from 'react-router-dom'

function Signup() {

    const [username,setusername]=useState(null)
    const [email,setemail]=useState(null)
    const [password,setpassword]=useState(null)
    const [fname,setfname]=useState(null)
    const [lname,setlname]=useState(null)
    const [address,setaddress]=useState(null)
    const [phno,setphno]=useState(null)

    function Details(){
        console.log("Your name is.."+username)
        console.log("Your email is.."+email)
        console.log("Your password is.."+password)
        console.log("Your first name is.."+fname)
        console.log("Your last name is.."+lname)
        console.log("Your address is..."+address)
        console.log("Your phnno..."+phno)
    }



    const CreateAccount = async ()=>{

        const data=new FormData()

        data.append("username",username)
        data.append("email",email)
        data.append("password",password)
        data.append("last_name",lname)
        data.append("first_name",fname)
        data.append("phone_number",phno)
        data.append("address",address)

        const response=await axios.post("https://gist.manojkoravangi.com/insertuserdata.php",data,{header:{"content-type":"multipart/form-data"}})
        if(response){
            if(response.data.status==="success"){
                alert("Successfully created")
                window.location.replace('/login')
            }
            else{
                alert("Acccount creation failed")
            }
        }
    }

  return (

    <div>


    <div class="loginlogo">
        <Link to='/'>
        <img src={loginlogo} alt="amazon"/></Link>
    </div>

    <div class="signin">
        <div class="col-7 d-block mx-2 w-auto p-4 rounded">
            <h2 class="text-black fs-3 lh-sm">Signup</h2>
            <p class="email"><b>Enter username</b></p>  
            <input onChange={(event)=>{setusername(event.target.value)}} type="text" id="uusername" class='form-control' placeholder="Enter  userName"/>
            <p class='enterpass'><b>Enter your Email</b></p>
            <input onChange={(event)=>{setemail(event.target.value)}} type="text" class="spassword form-control mt-2" placeholder="Enter Email"/>
            <p class='enterpass'><b>Enter your Password</b></p>
            <input onChange={(event)=>{setpassword(event.target.value)}} type="password" class="spassword form-control mt-2" placeholder="Enter your password"/>
            <p class="email"><b>Enter your Last Name</b></p>
            <input onChange={(event)=>{setlname(event.target.value)}} type="text" id="uusername" class='form-control' placeholder="Enter Last Name"/>
            <p class="email"><b>Enter your First Name</b></p>
            <input onChange={(event)=>{setfname(event.target.value)}} type="text" id="uusername" class='form-control' placeholder="Enter First Name"/>
            <p class='enterpass'><b>Enter your Phno</b></p>
            <input onChange={(event)=>{setphno(event.target.value)}} type="text" class="spassword form-control mt-2" placeholder="Enter your password"/>
            <p class='enterpass'><b>Enter your Address</b></p>
            <input onChange={(event)=>{setaddress(event.target.value)}} type="text" class="spassword form-control mt-2" placeholder="Enter your address"/>
            <button onClick={()=>{CreateAccount()}} class="btn btn-warning w-100 mt-2 p-0" id='signupbutton' type='submit'>Signup</button>



            <p class="para m-3 ms-1">By continuing, you agree to Amazon's Conditions of Use and Privacy Notice.</p>
            <a href="#" class="help">Need help?</a>
           <br/>
           <p class='fs-6'>Already a user...<Link to="/login" class="help">Login</Link></p>
            <hr/>
            <h6 class="a-text-bold">Buying for work?</h6>
           <a href="#"  class="help"> Shop on Amazon Business</a>
        </div>
    </div>


    </div>
  )
}

export default Signup

