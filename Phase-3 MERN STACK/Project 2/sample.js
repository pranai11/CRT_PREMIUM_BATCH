function cnav(){
    var tags=document.getElementsByTagName("a")

    console.log(tags)

    var num=0
    do{
        tags[num].style.color="red"
        num++
    }while(num<5)
}


var marks={rohith:[20,30,40,50],ajay:[10,20,50,70]}
var rsum=0
var asum=0
for(var num=0;num<4;num++){
    rsum+=marks.rohith[num]
    asum+=marks.ajay[num]
}
console.log(rsum,asum)


