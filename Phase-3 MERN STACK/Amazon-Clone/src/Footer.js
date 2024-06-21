import globe from './images/globe.png';
import indiaflag from './images/india.jpg';
import endlogo from './images/endlogo.png';

function Footer(){
    return(
<div>
<div class="foot">
<div class="back-to-top">
        <p>Back to Top</p>               
    </div>
    <div class="e">
        <div class="end">
            <div class="ebox">
                <h2>Get to Know Us</h2>
                <h4>About us</h4>
                <h4>Careers</h4>
                <h4>Press Releases</h4>
                <h4>Amazon Science</h4>
            </div>
            <div class="ebox"><h2>Connect with Us</h2>
                <h4>About us</h4>
                <h4>Careers</h4>
                <h4>Press Releases</h4>
                <h4>Amazon Science</h4>
            </div>
            <div class="ebox"><h2>Make Money with Us</h2>
                <h4>Sell on Amazon</h4>
                <h4>Sell under Amazon Accelerator</h4>
                <h4>Protect and Build Your Brand</h4>
                <h4>Amazon Global Selling</h4>
                <h4>Become an Affiliate</h4>
                <h4>Fulfilment by Amazon</h4>
                <h4>Advertise Your Products</h4>
                <h4>Amazon Pay on Merchants</h4>
            </div>
            <div class="ebox">	
                <h2>Let Us Help You</h2>
                <h4>COVID-19 and Amazon</h4>
                <h4>Your Account</h4>
                <h4>Returns Centre</h4>
                <h4>100% Purchase Protection</h4>
                <h4>Amazon App Download</h4>
                <h4>Help</h4>
            </div>
            
        </div>
        <hr class="m-0"/>
        <div class="endlogo">
            <img id="el" src={endlogo} alt="amazon"/>
            <div id="ea"><img src={globe} alt="globe" class="eea"/><p class="pa">English</p></div>
            <div id="sea"><img src={indiaflag} alt="globe" class="eea"/><p class="pa">India</p></div>
        </div>
    </div>
    <div class="endfooter">
        <div class="endfooterinner">
            <div class="endbox">
                <h2>AdeBooks</h2>
                <h4>Books, art</h4>
                <h4>& collectibles</h4>
            </div>
            <div class="endbox">
                <h2>Amazon Web Services</h2>
                <h4>Scalable Cloud</h4>
                <h4>Computing Services</h4>
            </div>
            <div class="endbox">
                <h2>Audible</h2>
                <h4>Download</h4>
                <h4>Audio Books</h4>
            </div>
            <div class="endbox">
                <h2>IMDB</h2>
                <h4>Movies, TV</h4>
                <h4>& Celebrities</h4>
            </div>
        </div>
            <div class="endfooterinner">
                <div class="endbox">
                    <h2>AdeBooks</h2>
                    <h4>Books, art</h4>
                    <h4>& collectibles</h4>
                </div>
                <div class="endbox">
                    <h2>Amazon Web Services</h2>
                    <h4>Scalable Cloud</h4>
                    <h4>Computing Services</h4>
                </div>
                <div class="endbox">
                    <h2>Audible</h2>
                    <h4>Download</h4>
                    <h4>Audio Books</h4>
                </div>
                <div class="endbox">
                    <h2>IMDB</h2>
                    <h4>Movies, TV</h4>
                    <h4>& Celebrities</h4>
                </div>
            </div>
        <div class="Copyrights">
            <p>Conditions of Use & Sale Privacy Notice Interest-Based Ads</p>
            <p class="endcopy">  © 1996-2024, Amazon.com, Inc. or its affiliates</p>
        </div>
    </div>
    </div>
</div>
    )
}

export default Footer