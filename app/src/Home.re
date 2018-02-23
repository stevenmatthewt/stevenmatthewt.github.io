/* This is the basic component. */
let component = ReasonReact.statelessComponent("Page");

let show = ReasonReact.stringToElement;

/* Your familiar handleClick from ReactJS. This mandatorily takes the payload,
   then the `self` record, which contains state (none here), `handle`, `reduce`
   and other utilities */
let handleClick = (_event, _self) => Js.log("clicked!");

/* `make` is the function that mandatorily takes `children` (if you want to use
   `JSX). `message` is a named argument, which simulates ReactJS props. Usage:

   `<Page message="hello" />`

   Which desugars to

   `ReasonReact.element(Page.make(~message="hello", [||]))` */
let make = (_children) => {
  ...component,
  render: (_self) =>
  <div>
  <nav className="white" role="navigation">
    <div className="nav-wrapper container">
      <a id="logo-container" href="#" className="brand-logo">(show("Steven Thomas"))</a>
      <ul className="right hide-on-med-and-down">
        <li>
          <a href="#">(show("Navbar Link"))</a>
        </li>
      </ul>

      <ul id="nav-mobile" className="side-nav">
        <li>
          <a href="#">(show("Navbar Link"))</a>
        </li>
      </ul>
      <a href="#" className="button-collapse"> /* data-activates="nav-mobile" */
        <i className="material-icons">(show("menu"))</i>
      </a>
    </div>
  </nav>

  <div id="index-banner" className="parallax-container">
    <div className="section no-pad-bot">
      <div className="container">
        <br />
        <h1 className="header center teal-text text-lighten-2">(show("Parallax Template"))</h1>
        <div className="row center">
          <h5 className="header col s12 light">(show("A modern responsive front-end framework based on Material Design"))</h5>
        </div>
        <div className="row center">
          <a href="http://materializecss.com/getting-started.html" id="download-button" className="btn-large waves-effect waves-light teal lighten-1">(show("Get Started"))</a>
        </div>
        <br />
      </div>
    </div>
    <div className="parallax">
      <img src="/assets/img/background1.jpg" alt="Unsplashed background img 1"/>
    </div>
  </div>


  <div className="container">
    <div className="section">

      /* <!--   Icon Section   --> */
      <div className="row">
        <div className="col s12 m4">
          <div className="icon-block">
            <h2 className="center brown-text">
              <i className="material-icons">(show("flash_on"))</i>
            </h2>
            <h5 className="center">(show("Speeds up development"))</h5>

            <p className="light">(show("We did most of the heavy lifting for you to provide a default stylings that incorporate our custom components. Additionally, we refined animations and transitions to provide a smoother experience for developers."))</p>
          </div>
        </div>

        <div className="col s12 m4">
          <div className="icon-block">
            <h2 className="center brown-text">
              <i className="material-icons">(show("group"))</i>
            </h2>
            <h5 className="center">(show("User Experience Focused"))</h5>

            <p className="light">(show("By utilizing elements and principles of Material Design, we were able to create a framework that incorporates components and animations that provide more feedback to users. Additionally, a single underlying responsive system across all platforms allow for a more unified user experience."))</p>
          </div>
        </div>

        <div className="col s12 m4">
          <div className="icon-block">
            <h2 className="center brown-text">
              <i className="material-icons">(show("settings"))</i>
            </h2>
            <h5 className="center">(show("Easy to work with"))</h5>
            <p className="light">(show("We have provided detailed documentation as well as specific code examples to help new users get started. We are also always open to feedback and can answer any questions a user may have about Materialize."))</p>
          </div>
        </div>
      </div>

    </div>
  </div>


  <div className="parallax-container valign-wrapper">
    <div className="section no-pad-bot">
      <div className="container">
        <div className="row center">
          <h5 className="header col s12 light">(show("A modern responsive front-end framework based on Material Design"))</h5>
        </div>
      </div>
    </div>
    <div className="parallax">
      <img src="/assets/img/background2.jpg" alt="Unsplashed background img 2"/>
    </div>
  </div>

  <div className="container">
    <div className="section">

      <div className="row">
        <div className="col s12 center">
          <h3>
            <i className="mdi-content-send brown-text"></i>
          </h3>
          <h4>(show("Contact Us"))</h4>
          <p className="left-align light">(show("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam scelerisque id nunc nec volutpat. Etiam pellentesque tristique arcu, non consequat magna fermentum ac. Cras ut ultricies eros. Maecenas eros justo, ullamcorper a sapien id, viverra ultrices eros. Morbi sem neque, posuere et pretium eget, bibendum sollicitudin lacus. Aliquam eleifend sollicitudin diam, eu mattis nisl maximus sed. Nulla imperdiet semper molestie. Morbi massa odio, condimentum sed ipsum ac, gravida ultrices erat. Nullam eget dignissim mauris, non tristique erat. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae;"))</p>
        </div>
      </div>

    </div>
  </div>


  <div className="parallax-container valign-wrapper">
    <div className="section no-pad-bot">
      <div className="container">
        <div className="row center">
          <h5 className="header col s12 light">(show("A modern responsive front-end framework based on Material Design"))</h5>
        </div>
      </div>
    </div>
    <div className="parallax">
      <img src="/assets/img/background3.jpg" alt="Unsplashed background img 3"/>
    </div>
  </div>

  <footer className="page-footer teal">
    <div className="container">
      <div className="row">
        <div className="col l6 s12">
          <h5 className="white-text">(show("Company Bio"))</h5>
          <p className="grey-text text-lighten-4">(show("We are a team of college students working on this project like it's our full time job. Any amount would help support and continue development on this project and is greatly appreciated."))</p>


        </div>
        <div className="col l3 s12">
          <h5 className="white-text">(show("Settings"))</h5>
          <ul>
            <li>
              <a className="white-text" href="#!">(show("Link 1"))</a>
            </li>
            <li>
              <a className="white-text" href="#!">(show("Link 2"))</a>
            </li>
            <li>
              <a className="white-text" href="#!">(show("Link 3"))</a>
            </li>
            <li>
              <a className="white-text" href="#!">(show("Link 4"))</a>
            </li>
          </ul>
        </div>
        <div className="col l3 s12">
          <h5 className="white-text">(show("Connect"))</h5>
          <ul>
            <li>
              <a className="white-text" href="#!">(show("Link 1"))</a>
            </li>
            <li>
              <a className="white-text" href="#!">(show("Link 2"))</a>
            </li>
            <li>
              <a className="white-text" href="#!">(show("Link 3"))</a>
            </li>
            <li>
              <a className="white-text" href="#!">(show("Link 4"))</a>
            </li>
          </ul>
        </div>
      </div>
    </div>
    <div className="footer-copyright">
      <div className="container">
      (show("Made by "))<a className="brown-text text-lighten-3" href="http://materializecss.com">(show("Materialize"))</a>
      </div>
    </div>
  </footer>
  </div>
};
