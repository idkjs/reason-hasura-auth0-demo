const { ESLINT_MODES } = require("@craco/craco");

module.exports = {
  eslint: {
    mode: ESLINT_MODES.file,
    // Added!
    loaderOptions: eslintOptions => {
      return { ...eslintOptions, ignore: true };
    }
  }
};