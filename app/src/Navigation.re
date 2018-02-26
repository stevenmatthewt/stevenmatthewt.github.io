let show = ReasonReact.stringToElement;

let dataActivates = {
    ReasonReact.cloneElement(
        <a href="#" className="button-collapse">
        <i className="material-icons">(show("menu"))</i>
        </a>,
        ~props={"data-activates": "nav-mobile"},
        [||]
    );
};

let navbarLinks = (elements) => {
    [| <ul className="right hide-on-med-and-down">
        {elements |> ReasonReact.arrayToElement}
    </ul>,
    <ul id="nav-mobile" className="side-nav">
        {elements |> ReasonReact.arrayToElement}
    </ul> |] |> ReasonReact.arrayToElement
};
  
let navbarLink = (text, href) => {
    <li>
    <a href=(href)>(show(text))</a>
    </li>
};
  
let render = {
    <nav className="white" role="navigation">
        <div className="nav-wrapper container">
        <a id="logo-container" href="#" className="dark-font">(show("Steven Thomas"))</a>
        {navbarLinks([|navbarLink("About", "#about"), navbarLink("Projects", "#projects")|])}
        {dataActivates} /* data-activates="nav-mobile" */
        </div>
    </nav>
};