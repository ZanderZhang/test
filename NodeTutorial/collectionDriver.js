var ObjectID = require('mongodb').ObjectID;
CollectionDriver = function(db) {
  this.db = db;
};