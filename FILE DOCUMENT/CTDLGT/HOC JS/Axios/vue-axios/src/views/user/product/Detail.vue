<template>
  <div>
    <h1>PRODUCT DETAIL {{ $route.params.id }}</h1>
  </div>
</template>

<script>
export default {
  name: "detail-product",
  data() {
    return {
      id: "",
    };
  },
  created() {},
};
</script>
