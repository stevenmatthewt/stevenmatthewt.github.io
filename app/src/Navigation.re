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
  
let navbarLink = (text, href) => {
    [| <ul className="right hide-on-med-and-down">
        <li>
        <a href=(href)>(show(text))</a>
        </li>
    </ul>,
    <ul id="nav-mobile" className="side-nav">
        <li>
        <a href=(href)>(show(text))</a>
        </li>
    </ul> |] |> ReasonReact.arrayToElement
};
  
let render = {
    <nav className="white" role="navigation">
        <div className="nav-wrapper container">
        <a id="logo-container" href="#" className="dark-font">(show("Steven Thomas"))</a>
        {navbarLink("Hello!", "#")}
        {dataActivates} /* data-activates="nav-mobile" */
        </div>
    </nav>
};