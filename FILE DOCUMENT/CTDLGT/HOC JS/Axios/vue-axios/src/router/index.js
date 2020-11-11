import Vue from 'vue';
import Router from 'vue-router';
import VueMeta from 'vue-meta';
import routes from './routes';

Vue.use(Router)
Vue.use(VueMeta, {
    // The component option name that vue-meta looks for meta info on.
    keyName: 'page',
});

export default new Router({
    routes,
    mode: 'history',
    scrollBehavior(to, from, savedPosition) {
        if (savedPosition) {
            return savedPosition;
        } else {
            return { x: 0, y: 0 };
        }
    },
})