const clock = document.querySelector("h1#clock");

// function getClock(){
//     const chris_date = new Date(2025,12,24,0,0,0);
//     const chris_mon = chris_date.getMonth();
//     const chris_day = chris_date.getDay();
//     const chris_hour = chris_date.getHours();
//     const chris_mins = chris_date.getMinutes();
//     const chris_secs = chris_date.getSeconds();

//     let dis = 0;

//     const date = new Date();
//     const month = date.getMonth();
//     const day = date.getDay();
//     const hours = date.getHours();
//     const minutes =date.getMinutes();
//     const seconds =date.getSeconds();

//     let secs;
//     if(chris_secs-seconds<0){
//         secs = -(chris_secs-seconds);
    
//     }
    
//     switch(month){
//         case 1:
//             dis += 31 -day +28+31+30+31+30+31+31+30+31+30+24;
//             break;
//         case 2:
//             dis += 28-day+31+30+31+30+31+31+30+31+30+24;
//             break;
//         case 3:
//             dis += -day+31+30+31+30+31+31+30+31+30+24;
//             break;
//         case 4:
//             dis += -day+30+31+30+31+31+30+31+30+24;
//             break;
//         case 5:
//             dis += -day+31+30+31+31+30+31+30+24;
//             break;
//         case 6:
//             dis += 30-day+31+31+30+31+30+24;
//             break;
//          case 7:
//             dis += -day+31+31+30+31+30+24;
//             break;
//         case 8:
//             dis += -day+31+30+31+30+24;
//             break;
//         case 9:
//             dis += -day+30+31+30+24;
//             break;
//         case 10:
//             dis += -day+31+30+24;
//             break;
//         case 11:
//             dis += -day+30+24;
//             break;        
//         case 12:
//             if(24-day<0) dis =-day+24;
//             else dis = 365-(day-24);
//             break;

//     }
    
//     clock.innerText = `${dis}d ${chris_hour-hours}h ${chris_mins-minutes}m ${secs}s`;
// }

function getClock(){
    const date = new Date();
    const month = date.getMonth();
    const day = date.getDate();
    const hours = date.getHours();
    const minutes =date.getMinutes();
    const seconds =date.getSeconds();
    clock.innerText = `${month+1}/${day} ${hours}h ${minutes}m ${seconds}s`;

    }

getClock();
setInterval(getClock, 1000); //5000ms