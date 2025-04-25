function view(){
    if(document.getElementById("more").style.display == "block"){
      document.getElementById("more").style.display = "none"
      document.getElementById("shw").innerHTML = "Show More"
    }else{
      document.getElementById("more").style.display = "block"
      document.getElementById("shw").innerHTML = "Show Less"
    }
}
let images=["https://m.media-amazon.com/images/I/51SQtkuDJNL._AC_UF1000,1000_QL80_.jpg","https://upload.wikimedia.org/wikipedia/en/c/c2/Susan_sto_helit_promo.jpg","https://tabularasabookblog.wordpress.com/wp-content/uploads/2020/11/807a2-discworlddeath.jpg"]
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