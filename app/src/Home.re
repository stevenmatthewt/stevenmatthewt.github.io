/* This is the basic component. */
let component = ReasonReact.statelessComponent("Page");

let show = ReasonReact.stringToElement;

let summary = {
  <div id="index-banner" className="parallax-container">
    <div className="section no-pad-bot">
      <div className="container">
        <br />
        /* Insert circle image here! */
        <h1 className="header center text-lighten-2">(show("Steven Thomas"))</h1>
        <div className="row center">
          <h5 className="header col s12 light">(show("Graduate of Georgia Institute of Technology. Golang Enthusiast."))</h5>
        </div>
      </div>
    </div>
    <div className="parallax">
      <img src="/assets/img/background1.jpg" alt="Unsplashed background img 1"/>
    </div>
  </div>
};

let about = {
  <div id="about" className="container">
    <div className="section">

      /* <!--   Icon Section   --> */
      <div className="row">
        <div className="col s12 m6">
          <div className="icon-block">
            <h2 className="center brown-text">
              <i className="material-icons">(show("account_circle"))</i>
            </h2>
            <h5 className="center">(show("About me"))</h5>

            <p className="light">(show("We did most of the heavy lifting for you to provide a default stylings that incorporate our custom components. Additionally, we refined animations and transitions to provide a smoother experience for developers."))</p>
          </div>
        </div>

        <div className="col s12 m6">
          <div className="icon-block">
            <h2 className="center brown-text">
              <i className="material-icons">(show("web"))</i>
            </h2>
            <h5 className="center">(show("About this site"))</h5>

            <p className="light">(show("By utilizing elements and principles of Material Design, we were able to create a framework that incorporates components and animations that provide more feedback to users. Additionally, a single underlying responsive system across all platforms allow for a more unified user experience."))</p>
          </div>
        </div>
      </div>

    </div>
  </div>
};

let contact = {
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
};

/* `make` is the function that mandatorily takes `children` (if you want to use
   `JSX). `message` is a named argument, which simulates ReactJS props. Usage:

   `<Page message="hello" />`

   Which desugars to

   `ReasonReact.element(Page.make(~message="hello", [||]))` */
let make = (_children) => {
  ...component,
  render: (_self) =>
  <div>
  {Navigation.render}
  {summary}
  {about}

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

  {contact}

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

  {Footer.render}
  </div>
};
