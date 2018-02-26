// Generated by BUCKLESCRIPT VERSION 2.2.0, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");
var ReasonReact = require("reason-react/lib/js/src/ReasonReact.js");
var Footer$ReactTemplate = require("./Footer.bs.js");
var Shared$ReactTemplate = require("./Shared.bs.js");
var Projects$ReactTemplate = require("./Projects.bs.js");
var Navigation$ReactTemplate = require("./Navigation.bs.js");

var component = ReasonReact.statelessComponent("Page");

var summary = React.createElement("div", {
      className: "parallax-container",
      id: "index-banner"
    }, React.createElement("div", {
          className: "section no-pad-bot"
        }, React.createElement("div", {
              className: "container"
            }, React.createElement("br", undefined), React.createElement("h1", {
                  className: "header center text-lighten-2"
                }, Shared$ReactTemplate.show("Steven Thomas")), React.createElement("div", {
                  className: "row center"
                }, React.createElement("h5", {
                      className: "header col s12 light"
                    }, Shared$ReactTemplate.show("Graduate of Georgia Institute of Technology. Golang Enthusiast."))))), React.createElement("div", {
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
                            }, Shared$ReactTemplate.show("account_circle"))), React.createElement("h5", {
                          className: "center"
                        }, Shared$ReactTemplate.show("About me")), React.createElement("p", {
                          className: "light"
                        }, Shared$ReactTemplate.show("I'm a software engineer with a passion for creating reliable, robust, and responsive services. I'm a fairly recent graduate of the Georgia Institute of Technology (December 2016), but that doesn't mean I'm done learning. Whether through my career, or personal projects, I hope to learn new technologies and make some new things too (and probably show them off here).")), React.createElement("span", {
                          className: "light"
                        }, Shared$ReactTemplate.show("Things I like:")), React.createElement("ul", {
                          className: "light browser-default"
                        }, React.createElement("li", {
                              style: Shared$ReactTemplate.negTopMargin
                            }, Shared$ReactTemplate.show("Statically typed languages")), React.createElement("li", undefined, Shared$ReactTemplate.show("Opinionated programming")), React.createElement("li", undefined, Shared$ReactTemplate.show("Getting up early")), React.createElement("li", undefined, Shared$ReactTemplate.show("Coffee"))), React.createElement("span", {
                          className: "light"
                        }, Shared$ReactTemplate.$plus$plus$plus(Shared$ReactTemplate.show("Things I "), Shared$ReactTemplate.$plus$plus$plus(Shared$ReactTemplate.bold("don't"), Shared$ReactTemplate.show(" like:")))), React.createElement("ul", {
                          className: "light browser-default"
                        }, React.createElement("li", {
                              style: Shared$ReactTemplate.negTopMargin
                            }, Shared$ReactTemplate.show("Html/javascript (you can probably tell)")), React.createElement("li", undefined, Shared$ReactTemplate.show("Tomatoes. Just nope."))))), React.createElement("div", {
                  className: "col s12 m6"
                }, React.createElement("div", {
                      className: "icon-block"
                    }, React.createElement("h2", {
                          className: "center brown-text"
                        }, React.createElement("i", {
                              className: "material-icons"
                            }, Shared$ReactTemplate.show("web"))), React.createElement("h5", {
                          className: "center"
                        }, Shared$ReactTemplate.show("About this site")), React.createElement("p", {
                          className: "light"
                        }, Shared$ReactTemplate.show("This site serves two purposes. First, it's a place for me to showcase my most significant work. There's rather little of that at the moment, but I'll be adding anything interesting as I work on it.")), React.createElement("p", {
                          className: "light"
                        }, Shared$ReactTemplate.show("Second, and perhaps more importantly, it's an opportunity for me to experiment with frontend design. The vast majority of my professional experience consists of backend or systems engineering. Regardless, I want to expand my knowledge of frontend design as much as possible in my free time. So I'm using this website for exactly that purpose.")), React.createElement("p", {
                          className: "light"
                        }, Shared$ReactTemplate.$plus$plus$plus(Shared$ReactTemplate.show("This site is built using ReasonML and React. You can find the source code on "), Shared$ReactTemplate.link("GitHub", "https://github.com/stevenmatthewt/stevenmatthewt.github.io"))))))));

var projects = React.createElement("div", {
      className: "container",
      id: "projects"
    }, React.createElement("div", {
          className: "section"
        }, React.createElement("div", {
              className: "row"
            }, React.createElement("div", {
                  className: "col s12 center"
                }, React.createElement("h3", undefined, React.createElement("i", {
                          className: "mdi-content-send brown-text"
                        })), React.createElement("h4", undefined, Shared$ReactTemplate.show("Projects")))), React.createElement("div", {
              className: "row"
            }, React.createElement("div", {
                  className: "col s12 m6"
                }, Projects$ReactTemplate.semantics), React.createElement("div", {
                  className: "col s12 m6"
                }, Projects$ReactTemplate.concur))));

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
                                }))), React.createElement("div", {
                          className: "parallax"
                        }, React.createElement("img", {
                              alt: "Unsplashed background img 2",
                              src: "/assets/img/background2.jpg"
                            }))), projects, React.createElement("div", {
                      className: "parallax-container valign-wrapper"
                    }, React.createElement("div", {
                          className: "section no-pad-bot"
                        }, React.createElement("div", {
                              className: "container"
                            }, React.createElement("div", {
                                  className: "row center"
                                }))), React.createElement("div", {
                          className: "parallax"
                        }, React.createElement("img", {
                              alt: "Unsplashed background img 3",
                              src: "/assets/img/background3.jpg"
                            }))), Footer$ReactTemplate.render);
    });
  return newrecord;
}

var show = Shared$ReactTemplate.show;

var bold = Shared$ReactTemplate.bold;

var negTopMargin = Shared$ReactTemplate.negTopMargin;

var link = Shared$ReactTemplate.link;

var $plus$plus$plus = Shared$ReactTemplate.$plus$plus$plus;

exports.show = show;
exports.bold = bold;
exports.negTopMargin = negTopMargin;
exports.link = link;
exports.$plus$plus$plus = $plus$plus$plus;
exports.component = component;
exports.summary = summary;
exports.about = about;
exports.projects = projects;
exports.make = make;
/* component Not a pure module */
