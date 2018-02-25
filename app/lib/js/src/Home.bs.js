// Generated by BUCKLESCRIPT VERSION 2.2.0, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");
var ReasonReact = require("reason-react/lib/js/src/ReasonReact.js");
var Footer$ReactTemplate = require("./Footer.bs.js");
var Navigation$ReactTemplate = require("./Navigation.bs.js");

var component = ReasonReact.statelessComponent("Page");

function show(prim) {
  return prim;
}

function bold(text) {
  return React.createElement("span", {
              className: "bold"
            }, text);
}

var negTopMargin = {
  marginTop: "-0.8em"
};

function link(text, href) {
  return React.createElement("a", {
              href: href
            }, text);
}

function $plus$plus$plus(a, b) {
  return /* array */[
          a,
          b
        ];
}

var summary = React.createElement("div", {
      className: "parallax-container",
      id: "index-banner"
    }, React.createElement("div", {
          className: "section no-pad-bot"
        }, React.createElement("div", {
              className: "container"
            }, React.createElement("br", undefined), React.createElement("h1", {
                  className: "header center text-lighten-2"
                }, "Steven Thomas"), React.createElement("div", {
                  className: "row center"
                }, React.createElement("h5", {
                      className: "header col s12 light"
                    }, "Graduate of Georgia Institute of Technology. Golang Enthusiast.")))), React.createElement("div", {
          className: "parallax"
        }, React.createElement("img", {
              alt: "Unsplashed background img 1",
              src: "/assets/img/background1.jpg"
            })));

var about = React.createElement("div", {
      className: "container",
      id: "about"
    }, React.createElement("div", {
          className: "section"
        }, React.createElement("div", {
              className: "row"
            }, React.createElement("div", {
                  className: "col s12 m6"
                }, React.createElement("div", {
                      className: "icon-block"
                    }, React.createElement("h2", {
                          className: "center brown-text"
                        }, React.createElement("i", {
                              className: "material-icons"
                            }, "account_circle")), React.createElement("h5", {
                          className: "center"
                        }, "About me"), React.createElement("p", {
                          className: "light"
                        }, "I'm a software engineer with a passion for creating reliable, robust, and responsive services. I'm a fairly recent graduate of the Georgia Institute of Technology (December 2016), but that doesn't mean I'm done learning. Whether through my career, or personal projects, I hope to learn new technologies and make some new things too (and probably show them off here)."), React.createElement("span", {
                          className: "light"
                        }, "Things I like:"), React.createElement("ul", {
                          className: "light browser-default"
                        }, React.createElement("li", {
                              style: negTopMargin
                            }, "Statically typed languages"), React.createElement("li", undefined, "Opinionated programming"), React.createElement("li", undefined, "Getting up early"), React.createElement("li", undefined, "Coffee")), React.createElement("span", {
                          className: "light"
                        }, /* array */[
                          "Things I ",
                          /* array */[
                            bold("don't"),
                            " like:"
                          ]
                        ]), React.createElement("ul", {
                          className: "light browser-default"
                        }, React.createElement("li", {
                              style: negTopMargin
                            }, "Html/javascript (you can probably tell)"), React.createElement("li", undefined, "Tomatoes. Just nope.")))), React.createElement("div", {
                  className: "col s12 m6"
                }, React.createElement("div", {
                      className: "icon-block"
                    }, React.createElement("h2", {
                          className: "center brown-text"
                        }, React.createElement("i", {
                              className: "material-icons"
                            }, "web")), React.createElement("h5", {
                          className: "center"
                        }, "About this site"), React.createElement("p", {
                          className: "light"
                        }, "This site serves two purposes. First, it's a place for me to showcase my most significant work. There's rather little of that at the moment, but I'll be adding anything interesting as I work on it."), React.createElement("p", {
                          className: "light"
                        }, "Second, and perhaps more importantly, it's an opportunity for me to experiment with frontend design. The vast majority of my professional experience consists of backend or systems engineering. Regardless, I want to expand my knowledge of frontend design as much as possible in my free time. So I'm using this website for exactly that purpose."), React.createElement("p", {
                          className: "light"
                        }, /* array */[
                          "This site is built using ReasonML and React. You can find the source code on ",
                          link("GitHub", "https://github.com/stevenmatthewt/stevenmatthewt.github.io")
                        ]))))));

var contact = React.createElement("div", {
      className: "container"
    }, React.createElement("div", {
          className: "section"
        }, React.createElement("div", {
              className: "row"
            }, React.createElement("div", {
                  className: "col s12 center"
                }, React.createElement("h3", undefined, React.createElement("i", {
                          className: "mdi-content-send brown-text"
                        })), React.createElement("h4", undefined, "Contact Us"), React.createElement("p", {
                      className: "left-align light"
                    }, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam scelerisque id nunc nec volutpat. Etiam pellentesque tristique arcu, non consequat magna fermentum ac. Cras ut ultricies eros. Maecenas eros justo, ullamcorper a sapien id, viverra ultrices eros. Morbi sem neque, posuere et pretium eget, bibendum sollicitudin lacus. Aliquam eleifend sollicitudin diam, eu mattis nisl maximus sed. Nulla imperdiet semper molestie. Morbi massa odio, condimentum sed ipsum ac, gravida ultrices erat. Nullam eget dignissim mauris, non tristique erat. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae;")))));

function make() {
  var newrecord = component.slice();
  newrecord[/* render */9] = (function () {
      return React.createElement("div", undefined, Navigation$ReactTemplate.render, summary, about, React.createElement("div", {
                      className: "parallax-container valign-wrapper"
                    }, React.createElement("div", {
                          className: "section no-pad-bot"
                        }, React.createElement("div", {
                              className: "container"
                            }, React.createElement("div", {
                                  className: "row center"
                                }, React.createElement("h5", {
                                      className: "header col s12 light"
                                    }, "A modern responsive front-end framework based on Material Design")))), React.createElement("div", {
                          className: "parallax"
                        }, React.createElement("img", {
                              alt: "Unsplashed background img 2",
                              src: "/assets/img/background2.jpg"
                            }))), contact, React.createElement("div", {
                      className: "parallax-container valign-wrapper"
                    }, React.createElement("div", {
                          className: "section no-pad-bot"
                        }, React.createElement("div", {
                              className: "container"
                            }, React.createElement("div", {
                                  className: "row center"
                                }, React.createElement("h5", {
                                      className: "header col s12 light"
                                    }, "A modern responsive front-end framework based on Material Design")))), React.createElement("div", {
                          className: "parallax"
                        }, React.createElement("img", {
                              alt: "Unsplashed background img 3",
                              src: "/assets/img/background3.jpg"
                            }))), Footer$ReactTemplate.render);
    });
  return newrecord;
}

exports.component = component;
exports.show = show;
exports.bold = bold;
exports.negTopMargin = negTopMargin;
exports.link = link;
exports.$plus$plus$plus = $plus$plus$plus;
exports.summary = summary;
exports.about = about;
exports.contact = contact;
exports.make = make;
/* component Not a pure module */
