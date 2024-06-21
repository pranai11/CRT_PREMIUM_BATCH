import React from 'react'

function Payments({data}) {
    console.log(data)

  return (
    <div>
    <div>Payments</div>
    {data?
        <div><p>{data.first_name}</p></div>:<div>no data found</div>}
        </div>
  )
}

export default Payments