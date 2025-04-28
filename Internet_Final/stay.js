function view(){
    if(document.getElementById("more").style.display == "block"){
      document.getElementById("more").style.display = "none"
      document.getElementById("shw").innerHTML = "Show More"
    }else{
      document.getElementById("more").style.display = "block"
      document.getElementById("shw").innerHTML = "Show Less"
    }
    }
     
    let images= ["https://cf.bstatic.com/xdata/images/hotel/max1024x768/206317777.jpg?k=d8c98395334a3fcaf797dc7c552a215da5f6535c1a5457098f3498e5d222c169&o=&hp=1","https://teneohg.com/wp-content/uploads/2024/09/Sundance-Mountain-Resort-Bar-845x667.webp","https://www.sundanceresort.com/wp-content/uploads/2023/04/Matt-Morgan-Tree-Room-1-scaled.webp"]
    let counter=0
function change(){
    if (counter < images.length){
       document.getElementById("stuff").src = images[counter] 
       counter += 1
    }else{
        counter = 0
        document.getElementById("stuff").src = images[counter]
    }

} 