<template>
  <div>
    <router-link :to="{ name: 'home' }">Home</router-link>
    <router-link to="/about">About</router-link>
    <router-link to="/product">Product</router-link>
  </div>
</template>

<script>
export default {
  name: "Header",
};
</script>
