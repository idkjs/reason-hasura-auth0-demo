// open PostTypes;

// module PostsQuery = [%graphql
//   {|
//      query getPosts {
//       posts(order_by: {created_at: desc }) @bsRecord{
//         title
//         cover_img
//         content
//         created_at
//         user @bsRecord {
//           name
//           avatar_url
//         }
//       }
// }
//   |}
// ];

// module GetPostsQuery = ReasonApollo.CreateQuery(PostsQuery);
open Queries;
[@react.component]
let make = () => {
  <div className="flex flex-wrap">
    <GetPostsQuery>
      ...{({result}) =>
        switch (result) {
        | Loading => "Loading" |> ReasonReact.string
        | Error(error) =>
          Js.log(error);
          "Error" |> ReasonReact.string;
        | Data(response) =>
          switch (response##posts) {
          | posts =>
            posts
            |> Array.map(post =>
                 <div
                   className="bg-white rounded-t-lg overflow-hidden p-4 p-10 flex justify-center">
                   <Post post />
                 </div>
               )
            |> ReasonReact.array
          }
        }
      }
    </GetPostsQuery>
  </div>;
};