import React, { useState } from 'react'
import loginlogo from './images/loginlogo.png'
import axios from 'axios'
import { Link, Outlet } from 'react-router-dom'
import {useEffect} from 'react';
import CircularProgress from '@mui/material/CircularProgress';





function Login(){

    const [lemail,setlemail]=useState(null)
    const [lphnno,setlphnno]=useState(null)
    const [lpassword,setlpassword]=useState(null)
    const [load,Setload] = useState(null)


function ldetail(){
    console.log("Your Email: "+lemail)

    console.log("Your phnno: "+lphnno)

    console.log("Your password: "+lpassword)
}


useEffect(()=>{

    const userid=localStorage.getItem("user")
    if(userid&&userid!==null&&userid!=="null"){
        window.location.replace('/')
    }
    
    },[])

const login=async ()=>{



    const data=new FormData()
    data.append("phone_number",lphnno)
    data.append("password",lpassword)

    Setload(true)

    const response=await axios.post("https://gist.manojkoravangi.com/login.php",data,{header:{"content-type":"multipart/formdata"}})

    console.log(response.data.login_data)
    if(response){
        Setload(false)
        if(response.data.status==="success"){
            localStorage.setItem('user', response.data.login_data.user_id)
            {/*can use JSON.stringify(localstorage.setite('user',response.data.login_data)) to send whole object which will be converted to string instead of only user_id
               It can be accessed by converting it again into object format by using variable = JSON.parse(localstprage.getitem('user) and access items using . operator ex:variable.first_name)
            */}
            window.location.reload()
            alert(response.data.title)
            redirect()
        }
        else{
            alert(response.data.title)
        }
    }

}
function redirect(){
    localStorage.setItem('hasReloaded','false')
    window.location.replace("/")
    
    
}

  return (

<div>

    <div class="loginlogo">
        <Link to='/'>
        <img  src={loginlogo} alt="amazon"/></Link>
    </div>


    <div class="login">
        <div class="col-7 d-block mx-2 w-auto p-4 rounded">
            <h2 class="text-black fs-3 lh-sm">Log in</h2>
            
            
            <p className="email"><b>Enter Mobile No</b></p>
            <input onChange={(event)=>{setlphnno(event.target.value)}} type="text" class="form-control uusername" placeholder="Enter Mobile no"/>
            <p id='uupassword'><b>Enter your Password</b></p>
            <input onChange={(event)=>{setlpassword(event.target.value)}} type="password" class="form-control mt-2" id="upassword" placeholder="Enter password"/>
            <button onClick={()=>{login()}} class="btn btn-warning w-100 mt-2 p-0" id='continue'>{load?<CircularProgress size={20} />:"Login"}</button>



            <p class="para m-3 ms-1">By continuing, you agree to Amazon's Conditions of Use and Privacy Notice.</p>
            <a href="#" class="help">Need help?</a>
           <br/>
            <hr />
            <h6 class="a-text-bold">Buying for work?</h6>
           <a href="#"  class="help"> Shop on Amazon Business</a>
        </div>
        
        
    </div>

<hr class="horizontal"/>
<div class="create">

<button  class="btn btn-white text-black w-100 m-0 p-0" id='createamazonacc'><Link to="/Signup" id="createamazon">Create your Amazon Account</Link></button>
</div>


   </div> 
  )
}

export default Login