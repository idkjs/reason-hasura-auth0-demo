module PostMutation = [%graphql
  {|
     mutation addPost($title: String!, $content: String!, $sanitize: Boolean, $coverImg: String){
      insert_posts(objects: {user_id: "first-user-with-dummy-id", title: $title, content: $content, sanitize: $sanitize, cover_img: $coverImg }) {
        affected_rows
      }
    }
  |}
];

module AddPostMutation = ReasonApollo.CreateMutation(PostMutation);

open PostTypes;

module PostsQuery = [%graphql
  {|
     query getPosts {
      posts(order_by: {created_at: desc }) @bsRecord{
        title
        cover_img
        content
        created_at
        user @bsRecord {
          name
          avatar_url
        }
      }
}
  |}
];

module GetPostsQuery = ReasonApollo.CreateQuery(PostsQuery);