<template>
  <div>
    <Header></Header>
    <h1>{{ title }}</h1>
    <ul v-if="todos && todos.length">
      <li v-for="(todo, index) of todos" :key="index">
        <p>
          <strong>{{ todo.title }}</strong>
        </p>
      </li>
    </ul>
    <ul v-if="errors && errors.length">
      <li v-for="(error, index) of errors" :key="index">
        {{ error.message }}
      </li>
    </ul>
    <Footer></Footer>
  </div>
</template>

<script>
import axios from "axios";
import Header from "../components/Header";
import Footer from "../components/Footer";
export default {
  name: "Home",
  data() {
    return {
      title: "DAY LA TRANG HOME",
      todos: [],
      errors: [],
    };
  },
  components: {
    Header,
    Footer,
  },
  created() {
    axios
      .get(`https://jsonplaceholder.typicode.com/todos`, {
        params: {
          _limit: 3,
        },
      })
      .then((response) => {
        this.todos = response.data;
        console.log(this.todos[1].title);
      })
      .catch((e) => {
        this.errors.push(e);
      });
  },
};
</script>
