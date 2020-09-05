-- This is a unhelpful comment.
-- Import a database called hbtn_0d_tvshows and select titles that contain a genre id
SELECT tv_shows.title, tv_show_genres.genre_id FROM tv_shows LEFT OUTER JOIN tv_show_genres ON tv_shows.id = tv_show_genres.show_id ORDER BY title ASC, genre_id ASC;
