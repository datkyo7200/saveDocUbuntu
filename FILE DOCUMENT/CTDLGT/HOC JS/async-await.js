
async function asyncFunc() {
    try {
      // fetch data from a url endpoint
      const data = await axios.get("https://jsonplaceholder.typicode.com/todos/1");
      console.log("data",data.data);
      return data;
    } catch(error) {
      console.log("error", error);
      // appropriately handle the error
    }
  }
  console.log(object);