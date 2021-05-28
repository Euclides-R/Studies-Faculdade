'use strict';

const btnCad = document.querySelector('.btn__cad');
const btnLogin = document.querySelector('.btn__login');

const displayCad = document.querySelector('.box__cad');
const displayLogin = document.querySelector('.box__login');
const displayBtnCad = document.querySelector('.box__orange--cad');
const displayBtnLogin = document.querySelector('.box__orange--login');

// Declaration
let display = false;

btnCad.addEventListener('click', function () {
  displayCad.classList.add('box__cad--animation');
  displayLogin.classList.remove('box__login--animation');
  displayBtnCad.style.opacity = 0;
  displayBtnLogin.style.opacity = 1;

  animationBtn(displayBtnCad);
});

btnLogin.addEventListener('click', function () {
  displayCad.classList.remove('box__cad--animation');
  displayLogin.classList.add('box__login--animation');
  displayBtnCad.style.opacity = 1;
  displayBtnLogin.style.opacity = 0;
});

// Animation Class
const animationBtn = function (item) {
  item.style.animantion = '';
  setTimeout(() => (item.style.animantion = 'deslizar 5s linear'), 5);
};
