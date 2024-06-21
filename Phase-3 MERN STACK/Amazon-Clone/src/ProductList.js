import React, { useEffect, useState } from 'react'
import { Button, Col, Container, Row } from 'react-bootstrap'
import product1 from './images/product1.jpg'
import product2 from './images/product2.jpg'
import axios from 'axios'
import Header from './Header'
import { Link } from 'react-router-dom'
import Rating from '@mui/material/Rating';
import SingleProduct from './SingleProduct'

function ProductList({data}){


  const [proddetails,Setdetails]=useState(null)

  useEffect(()=>{

    PrintList()

  },[])

  const PrintList =async()=>{

    const data=new FormData()

    const response=await axios.post("https://gist.manojkoravangi.com/get-products.php",data,{headers:{"Content-Type":"multipart/formdata"}})

    if(response){

      if(response.data.status==='success'){
        console.log(response.data.products)
        Setdetails(response.data.products)
        
      }


    }


  }




  return (
    <div>

<Header data={data}/>


<marquee><h3>Product List Details</h3></marquee>


{proddetails?
  <div>

<div class='Container flex-wrap d-flex mx-2'>
{proddetails.map((product1)=>(
  
  <SingleProduct product={product1}/>

))
}</div></div>:null}

</div>
    
  )
}

export default ProductList