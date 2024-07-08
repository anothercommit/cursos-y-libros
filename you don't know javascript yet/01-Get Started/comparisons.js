const dayStart = "07:30";
const dayEnd = "17:45";

function scheduleMeeting(startTime, durationMinutes) {
  if (startTime.length == 4) startTime = "0" + startTime;

  start = dayStart.slice(0, 2) * 60 + dayStart.slice(3, 5) * 1;
  end = dayEnd.slice(0, 2) * 60 + dayEnd.slice(3, 5) * 1;

  let meetStart = startTime.slice(0, 2) * 60 + startTime.slice(3, 5) * 1;

  return meetStart >= start && meetEnd + durationMinutes <= end;
}

console.log(scheduleMeeting("7:00", 15)); // false
console.log(scheduleMeeting("07:15", 30)); // false
console.log(scheduleMeeting("7:30", 30)); // true
console.log(scheduleMeeting("11:30", 60)); // true
console.log(scheduleMeeting("17:00", 45)); // true
console.log(scheduleMeeting("17:30", 30)); // false
console.log(scheduleMeeting("18:00", 15)); // false
