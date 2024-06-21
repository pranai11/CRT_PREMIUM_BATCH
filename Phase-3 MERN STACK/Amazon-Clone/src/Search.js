import axios from 'axios'
import React, { useState } from 'react'
import { Button } from 'react-bootstrap'
import { Link } from 'react-router-dom'
import Header from './Header'
import Footer from './Footer'

const Search = ({data}) => {

const [limit,Setlimit]=useState(12)
const [result,Setresult]=useState(null)




const Addtocart=async (product_id)=>{

  const user_id=localStorage.getItem('user')


  if(user_id!=='null'){
    
  

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


    
  return (
    <div>
<Header data={data}/>
<div className='ms-lg-2 mt-2'>
<input onChange={(event)=>{Searchitem(event.target.value)}} placeholder='search item'></input><select onChange={(event)=>{Setlimit(event.target.value)}} className='text-dark'><option >3</option><option>6</option><option>12</option></select>
</div>

{result?

<div className='d-flex flex-wrap container-fluid mx-3'>

{result.map((item)=>(<div className='col-2 border shadow-sm p-2 mb-2 me--1'>

<img className='w-100 mb-4' alt='product' src={item.images}></img>
<p>{item.name}</p>

<p><b>Price: </b>${item.price}</p>
<Button className='mt-2'><Link to={'/Product/'+item.product_id} className='text-light text-decoration-none'>Buy Now</Link></Button><pre></pre>
            <Button class="but1" onClick={()=>{Addtocart(item.product_id)}}>Add to Cart</Button><br/>

</div>))}


</div>:<p>No products Found</p>}


<Footer></Footer>
    </div>
  )
}

export default Search