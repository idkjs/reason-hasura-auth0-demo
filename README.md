# Building blog CMS in ReasonML with GraphQL and Serverless using Hasura

see: [https://dev.to/hasurahq/building-blog-cms-in-reasonml-with-graphql-and-serverless-using-hasura-part-1-4c6h](https://dev.to/hasurahq/building-blog-cms-in-reasonml-with-graphql-and-serverless-using-hasura-part-1-4c6h)

## TakeAways

Using `modals` and how to use multiple `useState` functions for multiple values in
[AddPostForm.re](src/components/AddPostForm.re).

Setting up [craco.config.js](craco.config.js) to get rid of linting errors used in `create-react-app`. Our `js` is compiled from `bucklescript` so we don't need it linted. `eslintignore` doesn't work from `cra`.

