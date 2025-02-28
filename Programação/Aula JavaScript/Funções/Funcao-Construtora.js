function Person(nome,idade,peso) {
    this.name= nome
    this.age= idade
    this.weight= peso
}
const mayk = new Person('Mayk', 25, 68)
//New retorna para a variável um objeto, ou seja, cria um objeto.

console.log(mayk)

//New cria um objeto
//Person da constante está conectado ao person da função
//this é a palavra usada que vai referenciar a variável mayk
//this.algumaCoisa cria propriedades dentro do objeto.
//O parâmetro possibilita a criação das propriedade do objeto
//Os argumentos devem ser colocolados em ordem de acordo com o posicionamento das propriedade e separados por vírgulas.