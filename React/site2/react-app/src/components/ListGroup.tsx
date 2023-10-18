// Component to hold listGroup

import { useState } from "react";

// import { Fragment } from "react";
// import { MouseEvent } from "react";

// Prop
// { items: [], heading: string }
interface ListGroupsProps {
  items: string[]; //string array
  heading: string; //string
  onSelectItem: (item: string) => void;
}

function ListGroup({ items, heading, onSelectItem }: ListGroupsProps) {
  // Hook -> tap into build in features in react
  /*   arr[0] //variable(selectedIndex)
        arr[1] //updater function */
  const [selectedIndex, setSelectedIndex] = useState(-1);


  return (
    // fragment combines elements unlike <div> (no extra spacing)
    // <Fragment>
    // short from fragment <> STUFF </>
    <>
      <h1>{heading}</h1>

      {/* checks for empty list and outputs error message */}
      {items.length === 0 && <p>No item found</p>}

      <ul className="list-group">
        {/* maps replace entire group below /
        <li key={item} is a unique key prop to diferentiate items in list 
        (generally <li key={item.id}... */}
        {items.map((item, index) => (
          <li
            className={
              selectedIndex === index
                ? "list-group-item active"
                : "list-group-item"
            }
            key={item}
            onClick={() => {
              setSelectedIndex(index);
              onSelectItem(item);
            }}
          >
            {item}
          </li>
        ))}

        {/* <li className="list-group-item">An item</li>
        <li className="list-group-item">A second item</li>
        <li className="list-group-item">A third item</li>
        <li className="list-group-item">A fourth item</li>
        <li className="list-group-item">And a fifth one</li> */}
      </ul>
    </>
    // </Fragment>
  );
}

export default ListGroup;
