let show = ReasonReact.stringToElement;

let render = {
    <footer className="page-footer teal">
        <div className="container">
        <div className="row">
            <h5 className="white-text">(show("Find me on:"))</h5>
            <ul>
                <li>
                <a className="white-text" href="https://github.com/stevenmatthewt">(show("GitHub"))</a>
                </li>
                <li>
                <a className="white-text" href="https://www.linkedin.com/in/steven-thomas-4a16458a/">(show("LinkedIn"))</a>
                </li>
            </ul>
        </div>
        </div>
        <div className="footer-copyright">
        <div className="container">
        (show("Made with "))<a className="brown-text text-lighten-3" href="http://materializecss.com">(show("Materialize"))</a>
        </div>
        </div>
    </footer>
};