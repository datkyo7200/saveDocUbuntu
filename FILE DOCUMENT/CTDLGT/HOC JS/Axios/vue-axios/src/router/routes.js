import Home from '../views/Home.vue';
import About from '../views/About.vue';
import Error from '../views/Error.vue';
import ListProduct from '../views/product/List.vue';
import DetailProduct from '../views/product/Detail.vue';

export default [
    {
      path: '/',
      name: 'home',
      component: Home,
    },
    {
      path: '/about',
      name: 'about',
      component: About,
    },
    {
      path: '/product',
      name: 'product',
      component: ListProduct,
    },
    {
      path: '/product/:id',
      name: 'detail-product',
      component: DetailProduct,
    },
    {
      path: '/*',
      name: 'error',
      component: Error,
    }
];