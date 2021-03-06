include Shared;

let card = (title, description, link) => {
    <div className="card blue-grey">
        <div className="card-content white-text">
            <h5>(show(title))</h5>
            <p className="light">(show(description))</p>
        </div>
        <div className="card-action">
            {link |> ReasonReact.arrayToElement}
        </div>
    </div>
};

let semantics = {
    card("Semantics",
        "A CLI tool built using Golang to automatically manage semantic versioning of projects.",
        [|link("GitHub", "https://github.com/stevenmatthewt/semantics")|]
    )
};

let concur = {
    card("Concur",
        "A Golang package to facilitate with Go concurrency.",
        [|link("GitHub", "https://github.com/stevenmatthewt/concur"), link("Godoc", "https://godoc.org/github.com/stevenmatthewt/concur")|]
    )
};

let dotfiles = {
    card("Dotfiles",
        "My personal dotfiles used to setup my computers.",
        [|link("GitHub", "https://github.com/stevenmatthewt/dotfiles")|]
    )
};

let template = {
    card("Tmpl",
        "A Golang CLI tool to generate projects based off of templates.",
        [|link("GitHub", "https://github.com/stevenmatthewt/template")|]
    )
};

let inquiry = {
    card("Inquiry",
        "A Golang library to facilitate marshalling/unmarshalling query string parameters in Golang APIs.",
        [|link("GitHub", "https://github.com/stevenmatthewt/inquiry"), link("Godoc", "https://godoc.org/github.com/stevenmatthewt/inquiry")|]
    )
};