<template>
  <div>
    <Header></Header>
    <h1>{{ title }}</h1>
    <Footer></Footer>
  </div>
</template>

<script>
import Header from "../components/Header";
import Footer from "../components/Footer";
export default {
  name: "About",
  data() {
    return {
      title: "DAY LA TRANG ABOUT",
    };
  },
  components: {
    Header,
    Footer,
  },
};
</script>
