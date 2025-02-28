//hoisting

sayMyName() //Chamando a função antes dela ter sido criada

/* let sayMyName= */function sayMyName() {
    console.log("Thiago")
    //Ao ser criada acontece o hoisting. Aparecerá a string "Thiago" no console.

    //Mas se essa função for declarada dentro de uma variável, não ocorerrá os hoisting, nem mesmo se utilizar a variável do tipo var.
}