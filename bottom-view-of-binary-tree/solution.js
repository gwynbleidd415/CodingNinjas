
/* Declare and implement your function here 
eg: function example(parameter_name1,parameter_name2....){}
Handle the input/output from main()
*/

process.stdin.resume();
process.stdin.setEncoding('ascii');

var input_stdin = "";
var input_stdin_array = "";
var input_currentline = 0;

process.stdin.on('data', function (data) {
  input_stdin += data;
});

process.stdin.on('end', function () {
  input_stdin_array = input_stdin.split("\n");
  main();
});

function readLine() {
  return input_stdin_array[input_currentline++];
}

class Node {
  constructor(val) {
    this.val = val;
    this.next = null;
  }
};

class Queue {
  constructor() {
    this.head = null;
    this.tail = null;
  }
  front() {
    return this.head.val;
  }
  push(val) {
    const nd = new Node(val);
    if (this.head === null) this.head = this.tail = nd;
    else this.tail.next = nd;
    this.tail = nd;
  }
  pop() {
    if (this.head === this.tail) {
      this.head = this.tail = null;
      return;
    }
    this.head = this.head.next;
  }
  isEmpty() {
    if (this.head === null) return true;
    return false;
  }
  print() {
    let temp = this.head;
    while (temp) {
      console.log(temp.val.val);
      temp = temp.next;
    }
    console.log('===');
  }
}

class TreeNode {
  constructor(val) {
    this.val = val;
    this.left = null;
    this.right = null;
  }
}

function solution1(root) {
  const umap = {};
  const qu = new Queue();
  qu.push([0, root])
  let top;
  let minn = 0;
  while (!qu.isEmpty()) {
    top = qu.front();
    qu.pop();
    if (minn > top[0]) minn = top[0];
    umap[top[0]] = top[1];
    if (top[1].left) qu.push([top[0] - 1, top[1].left]);
    if (top[1].right) qu.push([top[0] + 1, top[1].right]);
  }
  const size = Object.keys(umap).length;
  const ans = new Array(size);
  for (const [first, second] of Object.entries(umap)) {
    ans[first - minn] = second.val;
  }
  return ans;
}


function main() {

  /* Read your input here 
  eg: For string variables:   let str = String(readLine()); 
      For int variables: let var_name = parseInt(readLine());
      For arrays : const arr = readLine().replace(/\s+$/g, '').split(' ');
  */
  const str = String(readLine()).split(' ').map(item => parseInt(item));
  const head = new TreeNode(str[0]);
  const qu = new Queue();
  let front;
  qu.push(head);
  for (let i = 1; i < str.length - 1; i = i + 2) {
    front = qu.front();
    qu.pop();
    let th1 = null, th2 = null;
    if (str[i] !== -1) {
      th1 = new TreeNode(str[i]);
      qu.push(th1);
    }
    if (str[i + 1] !== -1) {
      th2 = new TreeNode(str[i + 1]);
      qu.push(th2);
    }
    front.left = th1;
    front.right = th2;
    // qu.print();
  }
  while (!qu.isEmpty()) qu.pop();

  /*
  Call your function with the input/parameters read above
  eg: let x = example(var_name, arr);
  */

  const ans = solution1(head);

  /*
  Log your output here 
  eg: console.log(x);
  */
  console.log(ans.join(' '));
}
