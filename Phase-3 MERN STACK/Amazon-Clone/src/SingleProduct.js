
import React, { useEffect, useState } from 'react'
import { Button, Col, Container, Row } from 'react-bootstrap'
import product1 from './images/product1.jpg'
import product2 from './images/product2.jpg'
import axios from 'axios'
import Header from './Header'
import { Link } from 'react-router-dom'
import Rating from '@mui/material/Rating';

const SingleProduct = ({product}) => {
    const [proddetails,Setdetails]=useState(null)



 
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
    

  return (
    <>
   <div className="col-md-4 border shadow-lg p-5">
    <img className='w-75' src={product.images}></img>
    <div className="prodmatter">
                <p><span>Product ID: </span>{product.product_id}<br></br><span> Name: </span>{product.name}<span> </span>{product.product_type}</p>
            </div>
            <hr/>
            <p>Brand: {product.brand}</p>
            <Rating name="read-only" value={product.rating} readOnly /><span className='text-primary'>{product.ratings}</span>
            <p className="offer">-{product.discount}% <span class="cost">₹{product.price}</span></p>
            <p className="mrp">M.R.P.: <span class="original">₹{product.cutoff_price}</span></p>
            <p className="mb-2">Inclusive of all taxes</p>
            <p className="emi">
                <b>EMI</b> starts at ₹346 per month.<select class="emioption"> <option>EMI options</option>
                </select>
            </p>

            <br></br>
            <Button className='mt-2'><Link to={'/Product/'+product.product_id} className='text-light text-decoration-none'>Buy Now</Link></Button><pre></pre>
            <Button class="but1" onClick={()=>{Addtocart(product.product_id)}}>Add to Cart</Button><br/>

</div>

    
    </>
  )
}

export default SingleProduct