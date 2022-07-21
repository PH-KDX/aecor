#include "tokens.hh"

Token Token::from_type(TokenType type, Location location) {
  Token tok;
  tok.type = type;
  tok.location = location;
  return tok;
}

Token from_identifier(std::string_view identifier, Location location) {
  Token tok;
  tok.type = TokenType::Identifier;
  tok.location = location;
  tok.text = identifier;
  return tok;
}

Token from_keyword(std::string_view keyword, Location location) {
  Token tok;
  tok.type = TokenType::Keyword;
  tok.location = location;
  tok.text = keyword;
  return tok;
}
