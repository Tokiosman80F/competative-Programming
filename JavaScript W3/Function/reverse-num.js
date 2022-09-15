let x = 12345;
getReverse(x);

function getReverse(num) {
  let arr = num.toString(10).split("").map(Number);
  console.log(arr.reverse());
}
