let router = DirectorRe.makeRouter({
    "/": ReactDOMRe.renderToElementWithId(<Home/>, "index")
});

DirectorRe.configure(router, {"html5history": true});
DirectorRe.init(router, "/");