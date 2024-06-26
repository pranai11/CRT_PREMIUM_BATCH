import prod1 from './images/prod1.jpg';
import prod2 from './images/prod2.jpg';
import prod3 from './images/prod3.jpg';
import prod4 from './images/prod4.jpg';
import prod5 from './images/prod5.jpg';
import prod6 from './images/prod6.jpg';
import prod7 from './images/prod7.jpg';
import offer from './images/offer.png';
import product from './images/product.jpg';
import returnimg from './images/return.png';
import delivery1 from './images/delivery1.png';
import delivery2 from './images/delivery2.png';
import top from './images/top.png';
import location from './images/location.png';
import lock from './images/lock.png';
import Header from './Header'
import Footer from './Footer'
import { useEffect, useState } from 'react';
import axios from 'axios';
import { useParams } from 'react-router-dom';
import Rating from '@mui/material/Rating';


function Product({data}) {


    const parameters = useParams()


        useEffect (()=>{
        
        proddetails()

        },[])



        const [itemdetails,Setdetails]=useState(null)
        
      
        
        
        const proddetails = async ()=>{
        
          const data=new FormData()
        
          data.append("product_id",parameters.id)
        
        
          const details=await axios.post("https://gist.manojkoravangi.com/get-product-details.php",data,{headers:{"Content-Type":"multipart/form-data"}})
        
          console.log(details)
        
          Setdetails(details.data.data)
        
        }
        
        
        const Addtocart=async ()=>{

            const user_id=localStorage.getItem('user')

            if(user_id!='null'){

            const quantity=2

            const product_id=itemdetails.product_id

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

    
    <div>
<Header data={data}/>
<div>
    {itemdetails?
<div class="productpart">
        <div class="third-nav">
            <a href="#"><b>Amazon Home</b></a>
            <a href="#">Kitchen & Home Appliances</a>
            <a href="#">Large Appliances</a>
            <a href="#">Kitchen Dining</a>
            <a href="#">Furnoture</a>
            <a href="#">Home Furnishing</a>
            <a href="#">Home Decor</a>
            <a href="#">Home Improvement</a>
            <a href="#">Garden & Outdoor</a>
            <a href="#">Storage & Organization</a>
            <a href="#">Lighting</a>
        </div>



        <p id="topm">Home & Kitchen ? Home & Decor</p>
    <div class="main-content">
        <div class="left">
            <img class="img1" src={itemdetails.images} alt="prod" />
            <p class="miniimg">Roll over image to zoom in</p>
            <div class="prodimg">
                <img src={prod1} alt="otherimages" />
                <img src={prod2} alt="otherimages" />
                <img src={prod3} alt="otherimages" />
                <img src={prod4} alt="otherimages" />
                <img src={prod5} alt="otherimages" />
                <img src={prod6} alt="otherimages" />
                <img src={prod7} alt="otherimages" />
            </div>
        </div>
        <div class="middle">
            <div class="matter">
                <p><span>Product ID: </span>{itemdetails.product_id}<span> Name: </span>{itemdetails.name}<span> Description: </span>{itemdetails.description}</p>
            </div>
            <a href="#">Visit the SAF Store</a>
            <hr/>
            <Rating name="read-only" value={itemdetails.rating} readOnly /><span className='text-primary ms-2'>{itemdetails.ratings}</span>
            <p class="offer">-{itemdetails.discount}% <span class="cost">₹{itemdetails.price}</span></p>
            <p class="mrp">M.R.P.: <span class="original">₹{itemdetails.cutoff_price}</span></p>
            <p class="mb-2">Inclusive of all taxes</p>
            <p class="emi">
                <b>EMI</b> starts at ₹346 per month.<select class="emioption"> <option>EMI options</option>
                </select>
            </p>
            <hr/>
            <div class="offerflex">
                <img src={offer} class="offerlogo"/>
                <p class="offertext">Offers</p>
            </div>
            <div class="bank-offer ">
                <div class="offer1">
                    <p class='text1'>Bank Offers</p>
                    <p>Upto ₹250.00</p>
                    <p>discount on Citi Cre...</p>
                    <br/>
                    <a href="#">4 offers </a>
                </div>
                <div class="offer2">
                    <p class='text1'>Partner Offers</p>
                    <p>Get GST invoice and</p>
                    <p>save upto 28% on...</p>
                    <br/>
                    <a href="#">4 offers </a>
                </div>
            </div>
            <hr/>
            <div class="delivery">
                <div class="indelivery">
                    <img src={returnimg} class="dimg"/>
                    <p class="dcontent">10 days</p> <p class="dcontent">returnable</p>
                </div>
                <div>
                    <img src={delivery1} class="dimg"/>
                    <p class="dcontent">Amazon</p> <p class="dcontent">Delivered</p>
                </div>
                <div>
                    <img src={delivery2} class="dimg"/>
                    <p class="dcontent">Free Delivery</p>
                </div>
                <div>
                    <img src={top} class="dimg"/>
                    <p class="dcontent">Top Brand</p>
                </div>
            </div>
            <hr/>    
        </div>
        <div class="right">
            <p class="text2">₹{itemdetails.price}</p>
            <p class="m-0"><a href="#">Free delivery </a><b class="text3">Saturday, 8 June.</b></p>
            <p class="m-0 mt-2 fs-small">Order within 15 hrs 44 mins.</p>
            <a href="#" class="fs-sm;">Details</a>
            <div class="address">
                <img class="imagelocation" src={location}/>
                <a class="text3" href="#">Delivering to Nellore-525002-update location</a>
            </div>
            <h3 class="text-success fs-5 mt-2">In Stock</h3>
            <table class="mb-3">
                <tr>
                    <td class="text-secondary text4">Delivered by</td>
                    <td class="text4">Amazon</td>
                </tr>
                <tr>
                    <td class="text-secondary text5">Sold by</td>
                    <td class="text5">Shyam Ary N Frames</td>
                </tr>
            </table>
            <div class="d-flex mb-3">
                <p class="fs-6">Quantity:</p>
                <select class="text6">
                    <option>1</option>
                    <option>2</option>
                    <option>3</option>
                </select>
            </div>
            <button class="but1" onClick={()=>{Addtocart()}}>Add to Cart</button><br/>
            <button class="but2">Buy Now</button>
            <div class="lock d-flex mt-3">
                <img className='mt-1' src={lock} alt="lock" />
                <p class="text7">Secure transaction</p>
            </div>
            <hr/>
            <button class="add">Add to Wish List</button>
        </div>
    </div>
    </div>:<div></div>}
    </div>
<Footer/>

    </div>
  )
}

export default Product