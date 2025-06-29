const loginForm = document.getElementById("login-form");
const loginInput = document.querySelector("#login-form input");
const greeting = document.getElementById("greeting");

function handleLoginForm(event){
    event.preventDefault();
    const newName = loginInput.value;
    if(newName == localStorage.getItem(newName)){
        greeting.innerText = `Welcome back ${newName}`;
        greeting.classList.remove("hidden");
    }
    else {
        localStorage.setItem(newName,newName);
        greeting.innerText = `Hello ${newName}`;
        greeting.classList.remove("hidden");
        }
    }

loginForm.addEventListener("submit",handleLoginForm);