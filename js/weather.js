
const API_KEY ="1520109c93b9200656b39161e825997e";  

function onGeoOk(position){
    const lat = position.coords.latitude;
    const lon = position.coords.longitude;
    const url = `https://api.openweathermap.org/data/2.5/weather?lat=${lat}&lon=${lon}&appid=${API_KEY}`;
    fetch(url).then((response) => response.json()).then((data) => {
        const weather = document.querySelector("#weather span:first-child");
        const city = document.querySelector("#weather span:last-child");
        city.innerText = data.name;
        console.log(url);
        const a =data.weather[0].main;
        let k = "☀️";
        if(a == "Clouds") k = "☁️";
        if(a == "Rain") k = "🌧️☔";
        if(a == "Wind") k = "🍃🌀";
        if(a == "Snow") k = "🌨️☃️";

        weather.innerText=  `${k} ${data.weather[0].main} ${k} / ${data.main.temp} `;
    });
}

function onGeoError(){
    alert("Can't find you. No weather for you");
}

navigator.geolocation.getCurrentPosition(onGeoOk, onGeoError);