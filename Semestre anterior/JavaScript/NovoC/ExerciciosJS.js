// Código criado por Euclides Rodrigues Junior
// Aluno = Análise e desenvolvimento de Sistemas
// Curso = JavaScript
// 02/04/2020

// Exercícios 01
/*
var idade = prompt('Digite sua idade: ')

var faixa;

if (idade >= 0 && idade <= 15){
	faixa = "Criança"
} if (idade >= 16 && idade <= 30) {
	faixa = "Jovem"
} if (idade >= 30 && idade <= 60) {
	faixa = "Adulto"
} if (idade > 60) {
	faixa = "Idoso"
}

document.write('<br>Sua faixa etária é considerada: ' + faixa)
*/

// Exercícios 02
/*
var nome = prompt('Escreva seu nome: ')
var idade = prompt('Escreva sua idade: ')
var altura = prompt('Escreva sua altura em cm: ')
var peso = prompt('Escreva seu Peso:')

idade = parseInt(idade)
altura = parseFloat(altura)/100
peso = parseFloat(peso)

console.log(altura)

var pesoIdeal = peso/(altura*altura)

console.log(pesoIdeal)

document.write('A situação do seu peso, Mr. ' + nome + ' com a idade de ' + idade + ' é: <br>')

if (pesoIdeal < 16) {
	document.write('Baixo peso muito grave')
} if (pesoIdeal >= 16.01 && pesoIdeal <= 16.99) {
	document.write('Baixo peso grave')
} if (pesoIdeal >= 17 && pesoIdeal <= 18.49) {
	document.write('Baixo Peso')
} if (pesoIdeal >= 18.50 && pesoIdeal <= 24.99) {
	document.write('Peso Normal')
} if (pesoIdeal >= 25 && pesoIdeal <= 29.99) {
	document.write('Sobrepeso')
} if (pesoIdeal >= 30 && pesoIdeal <= 34.99) {
	document.write('Obesidade grau I')
} if (pesoIdeal >= 35 && pesoIdeal <= 39.99) {
	document.write('Obesidade grau II')
} if (pesoIdeal > 40) {
	document.write('Obesidade grau III')
}
*/