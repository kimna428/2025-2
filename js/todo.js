const toDoForm = document.getElementById("todo-form");
const toDoInput = toDoForm.querySelector("input");  //document.querySelector("#todo-form input")
const toDoList = document.getElementById("todo-list");

let toDos =[];

const TODOS_KEY = "todos"

function saveTodos(){
    localStorage.setItem(TODOS_KEY,JSON.stringify(toDos));
}

function handelToDoSubmit(event) {
    event.preventDefault();
    const newTodo = toDoInput.value;
    toDoInput.value = "";    
    const newTodoObj ={
        text: newTodo,
        id: Date.now(),
    };
    toDos.push(newTodoObj);
    paintToDo(newTodoObj);
    saveTodos();
}

function deleteToDo(event) {
    const li =event.target.parentElement;
    li.remove();
    toDos = toDos.filter((toDo)=> toDo.id !== parseInt(li.id));
    saveTodos();

}

function paintToDo(newTodo){
    const li = document.createElement("li");
    li.id = newTodo.id;
    const span = document.createElement("span");
    span.innerText = newTodo.text;
    const button = document.createElement("button");
    button.innerText = "🐻‍❄️";
    button.addEventListener("click",deleteToDo);
    li.appendChild(span);
    li.appendChild(button);

    toDoList.appendChild(li);
}

function sayHello(item){
    console.log("this is a turn of ",item);
}


toDoForm.addEventListener("submit",handelToDoSubmit);

const savedTodos = localStorage.getItem(TODOS_KEY);

if(savedTodos !== null){
    const parsedToDos = JSON.parse(savedTodos);
    toDos = parsedToDos;
    parsedToDos.forEach(sayHello);       //parseToDos.forEach((item) => console.log("this is a turn of ",item));   
}

function sexyFilter(item){   //[1,2,3,4].filter(sexyFilter)         sexyFilter([])      ->return true
    return item !== 3;
}