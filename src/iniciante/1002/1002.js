let input = require('fs').readFileSync('/dev/stdin', 'utf8');
let lines = input.split('\n');

let raio, area;
const PI = 3.14159;

raio = parseFloat(lines.shift());

area = PI * (raio ** 2);

console.log(`A=${area.toFixed(4)}`);
