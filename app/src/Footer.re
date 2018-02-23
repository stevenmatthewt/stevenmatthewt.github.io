let show = ReasonReact.stringToElement;

let render = {
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
        (show("Made with "))<a className="brown-text text-lighten-3" href="http://materializecss.com">(show("Materialize"))</a>
        </div>
        </div>
    </footer>
};