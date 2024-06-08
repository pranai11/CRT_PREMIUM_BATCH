function Addition(){
    var n1=90
    var n2=90
    console.log(n1+n2)
}

function login(){
    var uusername=document.getElementById("uusername").value
    var upassword=document.getElementById("upassword").value


console.log(uusername)
console.log(upassword)
    var name="pranai"
    var password="pranaid"

    if(name===uusername){
        if(password===upassword){
            console.log("Login Successfull")
        }
        else{
            console.log("Login Unsuccessfull")
        }
    }
    else{
        console.log("login unsuccessfull")
    }

}


function logindisplay(){
    var lsidebar=document.getElementById("left-sidebar")


if(lsidebar.style.display==="block"){
    lsidebar.style.display="none"
}
else{
    lsidebar.style.display="block"
}
}


function addit(){
    var data=[10,20,30,40,50]

    var sum=0

    for(var num=0;num<5;num++){
        sum+=data[num]
    }
    console.log(sum)
}


function Login2(){




    var usernameinput = document.getElementById("uusername")
    var passwordinput = document.getElementById("upassword")


fetch("https://manojkoravangi.com/geethanjali-login.php?username="+usernameinput.value+"&password="+passwordinput.value)
.then((response)=>{


response.json()
.then((data)=>{


if(data.status==="success"){
    alert("success")
}else{
    alert("error")
}
})  
.catch()
})
.catch()
}