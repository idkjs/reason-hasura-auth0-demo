let webSocketLink =
    ApolloLinks.webSocketLink(
      ~uri="ws://localhost:8080/v1/graphql",
      ~reconnect=true,
      (),
    );

  let httpLink =
    ApolloLinks.createHttpLink(~uri="http://localhost:8080/v1/graphql", ());
  /* based on test, execute left or right */
  let link =
    ApolloLinks.split(
      operation => {
        let operationDefition =
          ApolloUtilities.getMainDefinition(operation##query);
        operationDefition##kind == "OperationDefinition"
        &&
        operationDefition##operation == "subscription";
      },
      webSocketLink,
      httpLink,
    );

let makeApolloClient = _ => {
  // Create an InMemoryCache
  let inMemoryCache = ApolloInMemoryCache.createInMemoryCache();

  // Create an HTTP Link
  let httpLink =
    ApolloLinks.createHttpLink(~uri="http://localhost:8080/v1/graphql", ());

  // return apollo client instance
  ReasonApollo.createApolloClient(~link=httpLink, ~cache=inMemoryCache, ());
};