// import compenents (./ = Current folder)
// import Message from "./Message";

import NavBar from "./components/NavBar";
import ListGroup from "./components/ListGroup";
import Alert from "./components/Alert";
import Button from "./components/Button";
import { useState } from "react";

// website main() methods
function App() {
  // array of strings
  let items = [
    "New York",
    "San Franscisco",
    "Tokyo",
    "London",
    "Paris",
    "Phoenix",
  ];

  const handleSelectItem = (item: string) => {
    console.log(item);
  };

  const [alertVisible, setAlertVisibility] = useState(false);
  return (
    <div>
      <NavBar></NavBar>
      <ListGroup
        items={items}
        heading="Cities"
        onSelectItem={handleSelectItem}
      />
      <br></br>
      <>
        <Button onClick={() => console.log("Button Clicked")}>My Button</Button>
        <br></br>
        <Button color="dark" onClick={() => setAlertVisibility(true)}>
          My Button
        </Button>
      </>

      <br></br>
      {alertVisible && (
        <Alert onClose={() => setAlertVisibility(false)}>Hello World</Alert>
      )}
    </div>
  );

  /* Message component
  // set constant name -> can create getName() and call {getName()}
  const name = 'Brandon';

  // if name then print name else world
  if (name)
    return <h1>Hello {name}</h1>
  return<div><Message></Message></div>
  
  // print hello world
  // return <div><Message></Message></div>
  */
}

export default App;
