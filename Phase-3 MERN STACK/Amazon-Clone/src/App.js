import { CarouselItem, ModalBody, ModalDialog, ModalFooter} from 'react-bootstrap';
import img1 from './images/img1.jpg';
import img2 from './images/img2.jpg';
import img3 from './images/img3.jpg';
import img4 from './images/img4.jpg';
import Header from "./Header";
import Footer from "./Footer";
import { useState } from 'react';
import Modal from 'react-bootstrap/Modal';
import Button from 'react-bootstrap/Button';
import Login from './login';
import Signup from './Signup';
import Homepage from './Homepage';
import Product from './Product'; 
import ProductList from './ProductList'
import Accoundetails from './Accoundetails';
import Search from './Search';
import Payments from './Payments';
import Cart from './Cart';
import { BrowserRouter, Route, Routes } from 'react-router-dom';
import {useEffect} from 'react';

function App() {

  const userdetails=JSON.parse(localStorage.getItem('userdetails'))


  return (<div> 

<BrowserRouter>

<Routes>

<Route path="/" element={<Homepage data={userdetails}/>}>Headerpage</Route>
<Route path='/Header' element={<Header data={userdetails}/>}/>
<Route path='/login' element={<Login/>}/>
<Route path="/signup" element={<Signup/>}/>
<Route path="/Product/:id" element={<Product data={userdetails}/>}/>
<Route path="/ProductList" element={<ProductList data={userdetails}/>}/>
<Route path='/Accountdetails' element={<Accoundetails data={userdetails}/>}/>
<Route path='/Search' element={<Search data={userdetails}/>}/>
<Route path='/Payments' element={<Payments data={userdetails}/>}/>
<Route path='/Cart' element={<Cart data={userdetails}/>}/>

</Routes>

</BrowserRouter>



    </div>
  );
}

export default App;


